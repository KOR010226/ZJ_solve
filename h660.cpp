#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x, r, v, n, p, s;
    cin >> x >> r >> v >> n;
    while(n --){
      cin >> p >> s;
      if(p >= x - r && p <= x + r){
        if(s <= v){
          x = p;
        }
        else{
          x += (p < x ? 15 : - 15);
          /* 
          if(p < x) --> x += 15;
          if(!(p < x)) --> x += -15;
          */
        }
      }
    }
    printf("%d\n", x);
}