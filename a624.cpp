#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s, strength[] = {"WEAK", "ACCEPTABLE", "GOOD", "STRONG"};
    while(cin >> s){
      int uc = 0, lc = 0, ds = 0, i;
      
      for(i = 0; i != s.size(); i ++){
        uc = uc || isupper(s[i]);// upper case
        lc = lc || islower(s[i]);// lower case
        ds = ds || isdigit(s[i]) // digit or symbol
        || ispunct(s[i]); // 數字或符號
      }
      
      i = (s.size() >= 8) + (uc && lc) + ((uc || lc) && ds);
      cout << "This password is " << strength[i] << endl;
    }
}