#include <bits/stdc++.h>
using namespace std;

int main() 
{
    pair<int, int> p[355]; 
    int n, h;
    cin >> n;
    for(int i = 0 ;i < n ;i ++){
      cin >> p[i].first >> p[i].second;
    }
    
    for(int i = 0; i < n - 1; i ++){
      for(int j = 0;j < n - 1 - i; j ++){
        if(p[j].first > p[j + 1].first){
          swap(p[j].first, p[j + 1].first);
          swap(p[j].second, p[j + 1].second);
        }
      }
    }
    
    cin >> h;
    
    int ans = 0;
    
    for(int i = n - 1; i >= 0; i --){
        if(h > 0){
          ans ++;
          h -= p[i].second;
      }
        if(ans == n){
          break;
        }
        if(h < 0){
          break;
        }
    }
  cout << ans << endl;
}