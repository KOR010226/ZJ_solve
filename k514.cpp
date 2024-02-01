#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int ans[4];
    for(int i = 0; i < 4; i ++){
      cin >> ans[i];
    }
    int N;
    cin >> N;
    int med[4][10] = {0};
    for(int i = 0; i < 4; i ++){
      for(int j = 0; j < N ;j ++){
        cin >> med[i][j];
      }
    }
    int ind = 0;
    for(int i = 0; i < 4; i ++){
      if(ans[i] == 1){
        ind = i;
        break;
      }
    }
    int scale = 0;
    bool find = false;
    for(int i = 0; i < N; i ++){
      scale = med[ind][i];
      int cnt = 1;
      for(int j = 0; j < 4; j ++){
        if(j == ind) continue;
        for(int k = 0; k < N; k ++){
          if(med[j][k] == scale * ans[j]){
            cnt += 1;
            break;
          }
        }
      }
      if(cnt == 4){
        find = true;
        break;
      }
    }
    if(!find){
      cout << -1 << endl;
    }
    else{
      for(int i = 0; i <4 ;i ++){
        cout << ans[i] * scale << ' ';
      }
    }
    cout << endl;
}