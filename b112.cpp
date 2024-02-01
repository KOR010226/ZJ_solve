#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[501];
    int n;
    while(cin >> n){
      int max_num = -1;
      for(int i = 0;i < n ;i ++){
        cin >> a[i];
        if(a[i] > max_num){
          max_num = a[i];
        }
      }
      int ans = -1;
      for(int i = 1; i <= max_num; i ++){
        int no = 0;
        for(int j = 0; j < n; j ++){
          if(a[j] % i != 0){
            no ++;
          }
        }
        if(no){
          continue;
        }
        else if(!no){
          if(i > ans){
            ans = i;
          }
        }
      }
      
      cout << ans << endl;
    }
    
}