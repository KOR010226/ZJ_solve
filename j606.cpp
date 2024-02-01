#include <bits/stdc++.h>
using namespace std;
string s[21];

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k, q, r;
    cin >> k >> q >> r;
    cin >> s[0];
    
    for(int i = 1; i <= q; i ++){
      s[i] = s[i - 1];
      for(int j = 0, p; j < k ; j ++){
        cin >> p;
        s[i][p - 1] = s[i - 1][j];
      }
    }
    
    for(int i = 0; i < r; i ++){
      for(int j = 1; j <= q; j ++){
        cout << s[j][i];
      }
      cout << "\n";
    }
    
}