#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s2.size(); i ++){
      bool ok = false;
      for(int j = 0;j < s1.size(); j ++){
        if(s2[i] == s1[j]){
          ok = true;
          s1[j] = '0';
          cout << j + 1 << ' ';
          break;
        }
      }
      if(!ok){
        cout << 'X' << ' ';
      }
    }
    return 0;
}