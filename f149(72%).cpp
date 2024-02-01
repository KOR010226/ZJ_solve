#include <iostream>
using namespace std;
// 邊界檢查 - 八方位
// 72 %
int main() 
{
    int a[16][16];
    int n, m;
    cin >> n >> m;
    int bomb = 0;
    for(int i = 0; i < n ; i ++){
      for(int j = 0; j < m ; j ++){
        cin >> a[i][j];
        if(a[i][j] == 1){
          bomb ++;
        }
      }
    }
    
    int can = 0, cant;
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < m ; j ++){
        bool f[8] = {false};
        if(a[i][j] == 5){
          if(i - 1 >= 0){// up
           f[0] = true;
            if(a[i - 1][j] == 5){
              a[i][j] = 0;
              a[i - 1][j] = 0;
            }
          }
          if(i + 1 < n){//down
            f[1] = true;
            if(a[i + 1][j] == 5){
              a[i][j] = 0;
              a[i + 1][j] = 0;
            }
          }
          if(j - 1 >= 0){// left
            f[2] = true;
            if(a[i][j - 1] == 5){
              a[i][j] = 0;
              a[i][j - 1] = 0;
            }
          }
          if(j + 1 < m){// right
            f[3] = true;
            if(a[i][j + 1] == 5){
              a[i][j] = 0;
              a[i][j + 1] = 0;
            }
          }
          if(j - 1 < m && i - 1 >= 0){
            f[4] = true;
            if(a[i - 1][j -1] == 5){
              a[i][j] = 0;
              a[i - 1][j - 1] = 0;
            }
          }
          if(j - 1 < m && i + 1 < n){
            f[5] = true;
            if(a[i + 1][j - 1] == 5){
              a[i][j] = 0;
              a[i + 1][j - 1] = 0;
            }
          }
          if(i - 1 >= 0 && j + 1 < m){
            f[6] = true;
            if(a[i - 1][j + 1] == 5){
              a[i][j] = 0;
              a[i - 1][j + 1] = 0;
            }
          }
          if(i + 1 < n && j + 1 <= m){
            f[7] = true;
            if(a[i + 1][j + 1] == 5){
              a[i][j] = 0;
              a[i + 1][j + 1] = 0;
            }
          }
        }
          if(a[i][j] == 5){
            if(f[0]){
            if(a[i - 1][j] == 1){
              a[i - 1][j] = 0;
              can ++;// up
            }
          }
          if(f[1]){
            if(a[i + 1][j] == 1){
              a[i + 1][j] = 0;
              can ++;// down
            }
          }
          if(f[2]){
            if(a[i][j - 1] == 1){
              a[i][j - 1] = 0;
              can ++;// left
            }
          }
          if(f[3]){
            if(a[i][j + 1] == 1){
              a[i][j + 1] = 0;
              can ++;// right
            }
          }
          if(f[4]){
            if(a[i - 1][j - 1] == 1){
              a[i - 1][j - 1] = 0;
              can ++;// left up
            }
          }
          if(f[5]){
            if(a[i + 1][j - 1] == 1){
              a[i + 1][j - 1] = 0;
              can ++;// left down
            }
          }
          if(f[6]){
            if(a[i - 1][j + 1] == 1){
              a[i - 1][j + 1] = 0;
              can ++;// right up
            }
          }
          if(f[7]){
            if(a[i + 1][j + 1] == 1){
              a[i + 1][j + 1] = 0;
              can ++;// right down
            }
          }
        }
        }
      }
      
    cant = bomb - can;
    cout << can << " " << cant << endl;
}