#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<char > v1, v2;
    string s;
    char c;
    
    while(cin >> s >> c){
      for(int i = 0 ;i < s.length(); i ++){
        if(s[i] == c){
          continue;
        }
        else{
          v1.push_back(s[i]);
        }
      }
      
      for(int i = s.length() - 1; i >= 0; i --){
        if(s[i] == c){
          continue;
        }
        else{
          v2.push_back(s[i]);
        }
      }
      bool no = false;
      for(int i = 0; i < v1.size();i ++){
        if(v1[i] != v2[i]){
          no = true;
          break;
        }
      }
      if(no){
        cout << "No" << endl;
      }
      else{
        cout << "Yes" << endl;
      }
    }
}