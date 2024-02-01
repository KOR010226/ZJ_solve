#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[101];
    int n;
    cin >> n;
    for(int i = 0 ; i< n; i ++){
      cin >> a[i];
    }
    int ans = 0;
    for(int i = 0; i < n ;i ++){
      if(a[i] == 0){
        int min = INT_MAX;
        
        if(i - 1 >= 0){// left
          if(a[i - 1] < min){
            min = a[i - 1];
          }
        }
        if(i + 1 < n){// right
          if(a[i + 1] < min){
            min = a[i + 1];
          }
        }
        ans += min;
      }
    }
    cout << ans << endl;
}