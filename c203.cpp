#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s[] = {"deficient", "perfect", "abundant"};
    int t, n;
    cin >> t;
    for(int i = 0 ;i < t; i ++){
      int sum = 0;
      cin >> n;
      for(int i = 1; i < n ; i ++){
        if(n % i == 0){
          sum += i;
        }
      }
      if(sum == n){
        cout << s[1] << endl;
      }
      else if(sum < n){
        cout << s[0] << endl;
      }
      else{
        cout << s[2] << endl;
      }
    }
}