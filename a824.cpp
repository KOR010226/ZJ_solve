#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int a, b, c, sum= 0;
    cin >> a >> b >> c;
    for(int i = 1; i <= c; i ++){
      if(i % a == 0 || i % b == 0){
        sum += i;
      }
    }
    int ans = sum % 26;
    for(int i = 0; i < s.size(); i ++){
      if(ans - 1 == i){
        cout << s[i];
        break;
      }
    }
}