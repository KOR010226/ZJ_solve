#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m, r ,c, i, j;
    int a[51][51], srow[2500], scol[2500], k = 0;
    cin >> n >> m;
    
    for(i = 0; i < n ; i ++){
      for(j = 0 ; j < m ; j ++){
        cin >> a[i][j];
      }
    }
    
    for(r = 0 ; r < n; r ++){
      for(c = 0; c < m ;c ++){
        int total = 0, x = a[r][c];
        
        for(i = r - x; i <= r + x; i ++){
          if(i < 0 || i >= n){
            continue;
          }
          for(j = c - x; j <= c + x; j ++){
            if(j < 0 || j >= m){
              continue;
            }
            if(abs(i - r) + abs(c - j) <= x){
              total += a[i][j];
            }
          }
        }
        
        if((total - x) % 10 == 0){
          srow[k] = r, scol[k] = c;
          k ++;
        }
      }
    }
    
    cout << k << "\n";
  
    for(i = 0; i < k; i ++){
      cout << srow[i] << ' ' << scol[i] << "\n";
    }
  return 0;
}