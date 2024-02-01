#include <bits/stdc++.h>
using namespace std;
// 有一個測資跑負數，我看了很問號
// 所以第21行才會有兩個條件
int main() 
{
    int n, m;
    vector<int> v;
    cin >> n;
    while(n --){
      int sum = 0;
      while(cin >> m){
        v.push_back(m);
        if(m == 0){
          break;
        }
      }
      sort(v.begin(), v.end());
      for(int i = v.size() - 1, j = 1; i >= 0; i --, j ++){
        sum += abs(2 * (pow(v[i], j)));
      }
      if(sum > 5000000 || sum < -5000000){
        cout << "Too expensive\n";
      }
      else{
        cout << sum << endl;
      }
      v.clear();
    }
    return 0;
}