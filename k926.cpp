#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    int n;
    char c1, c2;
    cin >> n;
    while(n --){
      cin >> c1 >> c2;
      for(int i = 0 ;i < s1.size(); i ++){
        if(s1[i] == c1) s1[i] = c2;
      }
    }
    int ans = 0;
    for(int i = 0; i < s1.size(); i ++){
      if(s1[i] != s2[i]){
        ans ++;
      }
    }
    printf("%d", ans);
}