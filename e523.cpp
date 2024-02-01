#include <bits/stdc++.h>
using namespace std;
#define N 33

int f(int x){
  if(x == 1){
    return 1;
  }
  if(x == 2){
    return 1;
  }
  else{
    return f(x - 1) + f(x - 2);
  }
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[N], index[N];
    int n, x;
    cin >> n;
    a[0] = 0;
    index[0] = 0;
    for(int i = 1; i <= N; i ++){
      int j = 1;
      a[i] = f(i);
      index[j] = i;
      j ++;
    }
    
    while(n -- ){
      bool ok = false;
      int ans;
      cin >> x;
      if(x == 1){
        printf("%d\n", 1);
        continue;
      }
      else{
        for(int i = 1; i <= N ; i ++){
          if(a[i] == x){
            ok = true;
            ans = i;
          }
        }
      }
      
      if(ok)
        printf("%d\n", ans);
      else{
        printf("%d\n", -1);
      }
    }
    return 0;
}