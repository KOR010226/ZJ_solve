#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, p, ans;
    string s;
    
    cin >> n;
    while(n--){
      cin >> s;
      p = 0;
      ans = 0;
      for(int i = 0; i < s.size(); i ++){
        if(s[i] == 'p'){
          p ++;
        }
        else{
          if(s[i] == 'q' && p > 0){
            p --;
            ans ++;
          }
        }
      }
      cout << ans << endl;
    }
    return 0;
}