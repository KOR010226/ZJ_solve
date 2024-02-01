#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    int tea[201], stu[201];
    for(int i = 0 ; i < n ;i ++) cin >> tea[i];
    for(int i = 0 ; i < n; i ++) cin >> stu[i];
    int ans[201];
    for(int i = 0; i < n; i ++){
      int ok = 0;
      int dis = INT_MAX;
      for(int j = 0 ; j < n; j ++){
         if(tea[i] == stu[j]){
           if(abs(i - j) < dis){// 找最小
             dis = abs(i - j);
           }
           ok ++;
         }
      }
      if(ok) ans[i] = dis;
      if(!ok) ans[i] = -1;
    }
    
    for(int i = 0 ;i < n; i ++){
      cout << ans[i] << ' ';
    }
}