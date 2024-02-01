#include <bits/stdc++.h>
using namespace std;

int j(int n){
  int ans = 1;
    for(int i = 1; i <= n ; i ++){
      ans *= i;
    }
  return ans;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin >> n >> m){
      cout << j(n) / (j(m) * j(n - m)) << endl;
    }
    
}