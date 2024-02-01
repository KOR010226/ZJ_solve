#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    while(scanf("%d%d", &n, &m) == 2){
      if(n == 0 && m == 0) break;
      int sum = n * m;
      int i = 1, cur = sum, cost = n;
      while(cur > 0){
        if(cost > 0){
          cur -= cost;
          cost = n - (sum - cur) / m;
        }
        i += 1;
      }
      printf("%d\n", i - 1);
    }
    return 0;
}