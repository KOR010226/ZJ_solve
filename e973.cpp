#include <bits/stdc++.h>
using namespace std;
// ti[] 紀錄次數 tar[] 紀錄索引
int main() 
{
    int ti[11], tar[11];
    string s;
    cin >> s;
    for(int i = 0 ;i < 10; i ++){
      ti[i] = 0;
      tar[i] = i;
    }
    for(int i = 0;i < s.size(); i ++){
      int x = s[i] - 48;
      ti[x] ++;
    }
    
    for(int i = 0 ;i < 9; i ++){
      for(int j = 0 ;j < 9 - i; j ++){
        if(ti[j] < ti[j + 1]){
          swap(ti[j], ti[j + 1]);
          swap(tar[j], tar[j + 1]);
        }
      }
    }
    
    for(int i = 0; i < 10; i ++){
      if(ti[i] != 0) cout << tar[i] << ' ';
    }
}
