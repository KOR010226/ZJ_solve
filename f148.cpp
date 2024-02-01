#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int exists[26] = {}, pos[26][2] = {};
    char a[30][30];
    int n, m, alpha, cnt = 0;
    cin >> n >> m >> alpha;
    
    for(int i = 0; i < n ;i ++){
      for(int j = 0; j < m; j ++){
        cin >> a[i][j];
        if(a[i][j] != '0'){
          exists[a[i][j] - 'a'] = 1;// 存在
          pos[a[i][j] - 'a'][0] = i;// 照順序存位置
          pos[a[i][j] - 'a'][1] = j;
          cnt ++;
        }
      }
    }
    
    if(cnt < alpha){
      cout << "Mission fail.\n";
    }
    else{
      int tar = 0;
      for(int i = 0; i < 26; i ++){
        if(exists[i] == 1){
          cout << pos[i][0] << " " << pos[i][1] << endl;
          tar ++;
          if(tar == alpha){
          break;
          }
        }
      }
    }
    return 0;
}