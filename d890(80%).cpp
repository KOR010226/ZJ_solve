#include <bits/stdc++.h>
using namespace std;
// 先排序，再一次分兩個
// 80%

int main() 
{
    int n, k, gift; cin >> n >> k;
    vector<int> g;
    for(int i = 0; i < n; i ++){
      cin >> gift;
      g.push_back(gift);
    }
    sort(g.begin(), g.end());
    int sum1 = 0, sum2 = 0;
    if(n <= 2){
      sum1 += g[0];
      sum2 += g[1];
    }
    else{
      for(int i = 0; i < n; i += 2){
      if(n % 2 && i == n - 1){
        if(i == n - 1){
          if(sum1 <= sum2){
            sum1 += g[i];
            if(sum1 > sum2){
              sum2 += g[i];
              sum1 -= g[i];
            }
          }
          else if(sum2 <= sum1){
            sum2 += g[i];
            if(sum2 > sum1){
              sum1 += g[i];
              sum2 -= g[i];
            }
          }
        }
      }
      else{
        if(sum1 <= sum2){
          sum1 += g[i + 1];
          sum2 += g[i];
        }
        else if(sum2 <= sum1){
          sum2 += g[i + 1];
          sum1 += g[i];
        }
      }
    }
  }
    
    if(sum1 <= sum2){
      cout << sum1 << " " << sum2 << endl;
    }
    else{
      cout << sum2 << " " << sum1 << endl;
    }
}