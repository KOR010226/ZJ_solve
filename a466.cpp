#include <bits/stdc++.h>
using namespace std;

int main() 
{
    pair<string, int> p[3] = { {"one",1}, {"two", 2}, {"three", 3} };
    string s;
    int n;
    cin >> n;
    while(n --){
      cin >> s;
      for(int i = 0 ;i < 3; i ++){
        int sum = 0;
        for(int j = 0 ; j < s.size(); j ++){
          if(s[j] == p[i].first[j]){
            sum ++;
          }
        }
        if((sum == p[i].first.size() - 1) && (s.size() == p[i].first.size()) ){
          cout << p[i].second << endl;
          break;
        }
        else if(sum == p[i].first.size() && s.size() == p[i].first.size() ){
          cout << p[i].second << endl;// 相同也要算
          break;
        }
        else{
          continue;
        }
      }
    }
}