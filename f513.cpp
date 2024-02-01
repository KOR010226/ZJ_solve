#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m, a[101][101], cnt = 0;
    cin >> n >> m;
    
    for(int i = 0 ;i < n; i ++){
      for(int j = 0; j < m ;j ++){
        cin >> a[i][j];
      }
    }
    
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < m ;j ++){
        bool fail = 0;
        if(i - 1 >= 0){// up
          if(a[i - 1][j] == a[i][j]){
            fail ++;
          }
        }
        if(i + 1 < n){//down
          if(a[i + 1][j] == a[i][j]){
            fail ++;
          }
        }
        if(j - 1 >= 0){// left
          if(a[i][j - 1] == a[i][j]){
            fail ++;
          }
        }
        if(j + 1 < m){// right
          if(a[i][j + 1] == a[i][j]){
            fail ++;
          }
        }
        if(i - 1 >= 0 && j - 1 >= 0){// left up
          if(a[i - 1][j - 1] == a[i][j]){
            fail ++;
          }
        }
        if(i + 1 < n && j - 1 >= 0){// left down
          if(a[i + 1][j - 1] == a[i][j]){
            fail ++;
          }
        }
        if(i - 1 >= 0 && j + 1 < m){// right up
          if(a[i - 1][j + 1] == a[i][j]){
            fail ++;
          }
        }
        if(i + 1 < n && j + 1 < m){// right down
          if(a[i + 1][j + 1] == a[i][j]){
            fail ++;
          }
        }
        
        if(!fail){
          cnt ++ ;
        }
      }
    }
    
    cout << cnt << endl;
}