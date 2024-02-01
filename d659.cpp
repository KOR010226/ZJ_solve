#include <bits/stdc++.h>
using namespace std;

int main() 
{
  vector<int> v;
  int n, a , b, c, i = 1;
  cin >> n;
  while(n --){
    cin >> a >> b >> c;
    v.push_back(a); v.push_back(b); v.push_back(c);
    sort(v.begin(), v.end());
    cout << "Case " << i << ": " << v[1] << endl;
    v.clear();
    i ++;
  }
}