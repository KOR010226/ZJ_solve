#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v;
    int n, x;
    cin >> n;
    for(int i = 0 ;i < n ;i ++){
      cin >> x;
      v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    int sum = 0, ans = 0;
    for(int i = 0 ;i < n ;i ++){
      ans += sum + v[i];
      sum += v[i];
    }
    cout << ans << endl;
}