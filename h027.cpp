#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int sum_A = 0;
    int s, t, n, m, r;
    cin >> s >> t >> n >> m >> r;
    int A[s][t], B[n][m];
    
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
    
    for(int i = 0; i <= n - s; i ++){
      for(int j = 0; j <= m - t; j ++){
        int sum_B = 0;
        int con_B = 0;
          for(int k = 0; k < s ; k ++){
            for(int l = 0; l < t ; l ++){
              con_B += (A[k][l] != B[k + i][l + j]);
              sum_B += B[k + i][l + j];
          }
        }
        
        if(con_B <= r){
          ans1 ++;
          ans2 = min(ans2, abs(sum_A - sum_B));
        }

      }
    }
    
    if(ans1) cout << ans1 << "\n" << ans2 << "\n";
    else{
      cout << "0\n-1\n";
    }
}