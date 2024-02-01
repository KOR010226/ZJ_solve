#include <bits/stdc++.h>
using namespace std;
// 沒必要用pair
int main() 
{
    pair<int, int> p[2001];
    int n, m, sum1 = 0, sum2 = 0, x, y;
    cin >> n >> m;
    for(int i = 0; i < n; i ++){
      cin >> x;
      p[i].first = x;
      sum1 += p[i].first;
    }
    for(int i = 0;i < m ; i++){
      cin >> y;
      p[i].second = y;
      sum2 += p[i].second;
    }
    
    if(n > m && sum1 > sum2){
      cout << "Yes\n"; 
    }
    else{
      cout << "No\n";
    }
    
}