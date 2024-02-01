#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<LL> pq1;
    
    LL n, x, y, a[100006];
    cin >> n;
    
    for(LL i = 0 ;i < n; i ++){
      cin >> x;
      pq1.push(x);
    }
    
    for(LL i = 0; i < n; i ++){
      cin >> a[i];// gift 不能排序，所以用array
    }
    
    LL sum = 0;
    LL v = pq1.top();
    sum += v * 0;
    pq1.pop();
    pq1.push(0);
    
    for(LL m = 0, i = 0; pq1.size() ; pq1.pop(), i ++){
      m += a[i];
      sum += pq1.top() * m;
    }
    cout << sum << endl;
}