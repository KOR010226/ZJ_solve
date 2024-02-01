#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
// 不用struct 的樹
LL dfs(int v){
  LL total = 0;
  for(int i = 0; i < 2 + (v % 2); i ++){// 2 or 3 個分支
    int c;
    cin >> c;
    
    if(c > 0){
      total += abs(v - c) + dfs(c);
    }
  }
  return total;
}
int main() 
{
    int v;
    cin >> v;
    LL total = dfs(v);
    cout << total << endl;
}