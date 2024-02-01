#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int h1, m1, h2, m2;
    while(cin >> h1 >> m1 >> h2 >> m2){
      int d;
      int sum1 = h1 * 60 + m1;
      int sum2 = h2 * 60 + m2;
      
      if(sum2 < sum1){
        d = 1440 - sum1 + sum2;
      }
      else{
        d = sum2 - sum1;
      }
      int h, m;
      h = d / 60;
      m = d % 60;
      printf("%d %d\n", h, m);
    }
}