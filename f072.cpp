#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N, ans = 0;
    cin >> N;
    int g[N];
    
    for(int i = 0; i < N ;i ++){
      cin >> g[i];
    }
    
    for(int i = 0;i < N ;i ++){
      if(g[i] == 9){
        if(i - 1 >= 0){// left
          if(g[i - 1] == 0){
            g[i - 1] = -1;
          }
        }
        if(i + 1 < N){// right
          if(g[i + 1] == 0){
            g[i + 1] = -1;
          }
        }
      }
    }
    
    for(int i = 0;i < N;i ++){
      if(g[i] == 0){
        bool left = 0, right = 0;
        for(int k = i - 1; k >= 0;k --){// left
          if(g[k] == 1){
            left ++;
            break;
          }
        }
        
        for(int l = i + 1; l < N; l ++){
          if(g[l] == 1){
            right ++;
            break;
          }
        }
        
        if(left && right){
          ans ++;
        }
      }
    }
    
    cout << ans << endl;
}