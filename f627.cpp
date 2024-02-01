#include <bits/stdc++.h>
using namespace std;

int main() 
{
    pair<int, int> pp[1001];
    int n, m;
    cin >> n >> m;
    for(int i = 0;i < n; i ++){
      cin >> pp[i].first >> pp[i].second;
    }
    
    for(int i = 0; i < n - 1;i ++){
      for(int j = 0; j < n - 1 - i; j ++){
        if(pp[j].second > pp[j + 1].second){
          swap(pp[j].second, pp[j + 1].second);
          swap(pp[j].first, pp[j + 1].first);
        }
      }
    }
    
    int ans = 0;
    for(int i = n - 1; i >= 0; i --){
        while(pp[i].first > 0){
          ans += pp[i].second;
          pp[i].first --;
          m --;
          if(m == 0){
            break;
          }
        }
        if(m == 0) break;
      }
    cout << ans << endl;
    
}