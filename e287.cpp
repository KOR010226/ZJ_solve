#include <bits/stdc++.h>
using namespace std;
#define stop 1000000
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a[100][100], min = stop, x, y;
    cin >> n >> m;
    
    for(int i = 0 ;i < n; i++){
      for(int j = 0; j < m; j ++){
        cin >> a[i][j];
        if(a[i][j] < min){
          min = a[i][j];
          x = i;
          y = j;
        }
      }
    }
    
    int road = min;
    
    while(true){
      int min1 = stop;
      int x1, y1;
      //up
        if(x - 1 >= 0){
          if(a[x - 1][y] < min1){
            min1 = a[x - 1][y];
            x1 = x - 1;
            y1 = y;
          }
      }
      //down
        if(x + 1 < n){
          if(a[x + 1][y] < min1){
            min1 = a[x + 1][y];
            x1 = x + 1;
            y1 = y;
          }
      }
      //left
        if(y - 1 >= 0){
          if(a[x][y - 1] < min1){
          min1 = a[x][y - 1];
          x1 = x;
          y1 = y - 1;
        }
      }
      //right
        if(y + 1 < m){
          if(a[x][y + 1] < min1){
            min1 = a[x][y + 1];
            x1 = x;
            y1 = y + 1;
          }
      }
      
      if(min1 == stop){
        break;
      }
      else{
        a[x][y] = stop;
        x = x1;
        y = y1;
        road += min1;
      }
    }
    
    cout << road << "\n";
    return 0;
}