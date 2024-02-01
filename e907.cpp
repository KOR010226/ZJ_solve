#include <bits/stdc++.h>
using namespace std;

int main() 
{
    bool r1 = false, r2 = false, r3 = false, r4 = false, r5 = false;
    bool no1 = false;
    string s;
    while(cin >> s){
      int n = s.size();
      int zero = 0, one = 0;
      for(int i = 0 ;i < n; i ++){
        if(s[i] != '0' && s[i] != '1'){// 不是||而是&&
          no1 ++;
          r1 ++;
          break;
        }
      }
      if(n >= 8 && n <= 12) r2 = true;
      for(int i = 0; i < n; i++){
        if(s[i] == '0') {zero ++;}
        if(s[i] == '1') {one ++;}
      }
      if(zero >= 2){ r3 = true;}
      if(one >= 3) {r4 = true;}
      for(int i = 0;i < n - 2; i ++){
        bool a[3] = {0};
        if(s[i] == '1') {a[0] = true;}
        if(s[i + 1] == '0') {a[1] = true;}
        if(s[i + 2] == '1') {a[2] = true;}
        
        if(a[0] && a[1] && a[2]){r5 = true; break;}
      }
      if(!no1 && r2 && r3 && r4 && r5) {cout << 0 << endl ;}
      else{
        if(r1) {cout << 1 << " ";}
       if(! r2) {cout << 2 << " ";}
       if(! r3) {cout << 3 << " ";}
       if(! r4) {cout << 4 << " ";}
       if(! r5) {cout << 5 << " ";}
      }
       
    }
}