#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N, M, S = 0, ans = 0, a[21][21], x, y;
    vector<int> v1, v2;
    cin >> N >> M;
    
    for(int i = 0; i < N; i ++){
      int max = -1;
      for(int j = 0; j < M ; j ++){
        cin >> a[i][j];
      }
      for(int k = 0; k < M; k ++){
        if(a[i][k] > max){
          max = a[i][k];
          x = i;
          y = k;
        }
      }
      v1.push_back(a[x][y]);
      S += max;
    }
    cout << S << "\n";
    
    for(int i = 0; i < N; i ++){
        if(S % v1[i] == 0){
          ans == 0 ? cout << v1[i] : cout << ' ' << v1[i];
          ans ++;
        }
    }
    
    if(!ans){
      cout << -1 << "\n";
    }
}