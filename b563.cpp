#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int aa[101], bb[101];
    int n, a, b;
    while(cin >> n){
      int ans = 0;
      for(int i = 0 ;i < n; i ++){
        cin >> aa[i] >> bb[i];
      }
      
      for(int i  = 0; i < n ; i ++){
        for(int j = 0; j < n ; j ++){
          if(aa[i] == bb[j] && aa[j] == bb[i]){
            aa[i] = -INT_MAX + 2394 + i;
            aa[j] = -INT_MAX + 5487 + j;
            bb[i] = -INT_MAX + 1487 + i;
            bb[j] = -INT_MAX + 1395 + j;
            ans ++;
          }
        }
      }
      cout << ans << endl;
    }
    
}