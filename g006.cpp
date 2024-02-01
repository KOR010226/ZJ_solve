#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int count[26] = {0};
    string s;
    cin >> s;
    
    for(int i = 0 ;i < s.size(); i ++){
      count[s[i] - 'A'] ++;
    }
    
    for(int i = 100; i > 0 ;i --){// 最多100次
      for(int j = 0; j < 26; j ++){
        if(count[j] == i){
          cout << char(j + 'A');// int轉char
        }
      }
    }
}