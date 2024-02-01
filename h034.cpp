#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main() 
{
    string s[201];
    int n;
    cin >> n;
    int len = 0;
    for(int i = 0; i < n ; i++){
      cin >> s[i];
      if(s[i].size() > len){
        len = s[i].size();
      }
    }
    
    for(int i = 0; i < len ; i++){
      for(int j = 0; j < n ; j ++){
        if(s[j].size() <= i) continue;
        if(isalpha(s[j][i])) {cout << s[j][i];}
      }
    }
    cout << endl;
}