#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[20][20];
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    for(int i = 0; i < n ; i++){
      for(int j = 0; j < n; j ++){
        cin >> a[i][j];
      }
    }
    
    for(int i = 0; i < n / 2; i ++){
      for(int j = 0; j < n / 2; j ++){
        int mx = a[2 * i][2 * j];
        mx = max(mx, a[2 * i][2 * j + 1]);
        mx = max(mx, a[2 * i + 1][2 * j]);
        mx = max(mx, a[2 * i + 1][2 * j + 1]);
        printf("%d ", mx);
      }
      printf("\n");
    }
    
    return 0;
}