#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c;
    while(cin >> a >> b >> c){
      int aa = a / 10;
      int cc = c / 2;
      if(aa < cc){
        b += aa;
      }
      else{
        b += cc;
      }
      cout << a << " 個餅乾，" << b << " 盒巧克力，" << c << " 個蛋糕。" << endl;
    }
}