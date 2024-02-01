#include <bits/stdc++.h>
using namespace std;
// 直接開pair
int main() 
{
    pair<string, string> ss[6] ={{"HELLO","ENGLISH"}, {"HOLA","SPANISH"}, {"HALLO", "GERMAN"}, {"BONJOUR", "FRENCH"}, {"CIAO","ITALIAN"}, {"ZDRAVSTVUJTE", "RUSSIAN"}};
    string s;
    int i = 0, j = 1;
    while(cin >> s){
      if(s == "#"){
        break;
      }
      else{
        bool ok = false;
        for(int i = 0 ;i < 6; i ++){
          if(s == ss[i].first){
            ok ++;
            cout << "Case " << j << ": " << ss[i].second << endl;
            break;
          }
        }
        if(!ok){
          cout << "Case " << j << ": " << "UNKNOWN\n";
        }
      }
      j ++;
    }
}