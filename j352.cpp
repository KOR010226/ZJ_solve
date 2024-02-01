#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, x[101], y[101], a, b, sum_x = 0, sum_y = 0;
    cin >> n;
    
    for(int i = 1 ;i <= n ;i ++){
      cin >> x[i];
    }
    for(int i = 1; i <= n; i ++){
      cin >> y[i];
    }
    
    cin >> a >> b;
    
    for(int i = 1 ;i <= n ; i++){
      sum_x += x[i];
      sum_y += y[i];
      if(sum_x >= a && sum_y >= b){
        cout << i + 1 << "\n";
        break;
      }
    }
    
    if(sum_x < a || sum_y < b){
      cout << - 1 << "\n";
    }
}