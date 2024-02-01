#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , m, a[100][100], b[100][100];
    cin >> n >> m;
    
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < m; j++){
        cin >> a[i][j];
        b[i][j] = 0;
      }
    }
    
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < m; j ++){
        if(a[i][j] == 1){
          b[i][j] ++;
          if(i - 1 >= 0){//up
            b[i - 1][j] ++;
          }
          if(i + 1 < n){//down
            b[i + 1][j] ++;
          }
          if(j - 1 >= 0){//left
            b[i][j - 1] ++;
          }
          if(j + 1 < m){//right
            b[i][j + 1] ++;
          }
        }
        else if(a[i][j] == 2){
          b[i][j] ++;
          for(int k = i - 1; k >= 0; k --){//up
            b[k][j] ++;
          }
          for(int l = i + 1; l < n ; l ++){//down
            b[l][j] ++;
          }
          for(int left = j - 1; left >= 0; left --){//left
            b[i][left] ++;
          }
          for(int right = j + 1; right < m ; right ++){//right
            b[i][right] ++;
          }
        }
      }
    }
    
    for(int i = 0 ;i < n ; i++){
      for(int j = 0; j < m ; j++){
        cout << b[i][j] << " ";
      }
      cout << endl;
    }
}