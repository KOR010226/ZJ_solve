#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int n = s.size();
    if(n % 2){
      cout << "NO\n";
    }
    else{
      vector<char > v1, v2;
      for(int i = 0 ;i < n ; i ++){
        v1.push_back(s[i]);
      }
      for(int i = n - 1; i >= 0; i --){
        v2.push_back(s[i]);
      }
      bool no = false;
      for(int i = 0; i < n ;i ++){
        if(v1[i] != v2[i]){
          no = true;
          break;
        }
      }
      if(no){
        cout << "NO\n";
      }
      else{
        cout << "YES\n";
        for(int i = 0; i < n / 2; i ++){
          cout << s[i];
        }
        cout << "\n";
      }
    }
}