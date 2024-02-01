#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b ,c, sum[10] = {0}, Max = 0;
    cin >> a >> b >> c;
    sum[a] ++; sum[b] ++; sum[c] ++;
    
    for(int i = 1; i <= 9; i ++){
        Max = max(Max, sum[i]);
    }
    cout << Max << ' ';
    
    for(int i = 9 ;i >= 1; i --){
      if(sum[i] > 0){
        cout << i << ' ';
      }
    }
    return 0;
}