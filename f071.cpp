#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num[3];
    pair<int, int> p[5];
    for(int i = 0; i < 3 ;i ++){
      cin >> num[i];
    }
    for(int i = 0; i < 5; i ++){
      cin >> p[i].first;
    }
    for(int i = 0 ;i < 5; i ++){
      cin >> p[i].second;
    }
    int ans = 0;
    int cnt = 0;
    vector<int> k;
    bool three = false;
    for(int i = 0; i < 3; i ++){
      for(int j = 0; j < 5; j ++){
        if(num[i] == p[j].first){
          if(i == 2){
            three = true;
            ans -= p[j].second;
          }
          else{
            ans += p[j].second;
          }
        }
      }
    }
    
    if(ans <= 0){
      cout << 0 << endl;
    }
    else if(!three && ans > 0){
      ans *= 2;
      cout << ans << endl;
    }
    else cout << ans << endl;
}