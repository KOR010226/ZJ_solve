#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A[11][11], B[101][101];
    int sum_A = 0, sum_B, con_B;
    int s, t, n, m, r;
    cin >> s >> t >> n >> m >> r;
    
    for(int i = 0 ;i < s; i ++){
      for(int j = 0; j < t; j ++){
        cin >> A[i][j];
        sum_A += A[i][j];
      }
    }
    
    for(int i = 0; i < n;i ++){
      for(int j = 0; j < m; j ++){
        cin >> B[i][j];
      }
    }
    
    int ans1 = 0, ans2 = INT_MAX;
    
    for(int i = 0; i < n - s + 1; i ++){
      for(int j = 0; j < m - t + 1; j ++){
        
        for(int k = i , p = 0; k < s + i; k ++, p ++){
          for(int l = j , q = 0; l < t + j; l ++, q ++){
            if(B[k][l] != A[p][q]){
              con_B ++;
            }
            sum_B += B[k][l];
          }
        }
        
        if(con_B <= r){
          ans1 ++;
          
          if(abs(sum_A - sum_B) < ans2){
            ans2 = abs(sum_A - sum_B);
          }
        }
        sum_B = 0, con_B = 0;
      }
    }
    
    cout << ans1 << endl;
    if(ans2 == INT_MAX){
      cout << -1 << endl;
    }
    else{
      cout << ans2 << endl;
    }
}