#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x, y, n, x1, y1,ans1, ans2;
    cin >> x >> y;
    cin >> n;
    double dis;
    
    double min = INT_MAX;
    for(int i = 0; i < n; i ++){
      cin >> x1 >> y1;
      
      dis = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
      
      if(dis < min){
        min = dis;
        ans1 = x1, ans2 = y1;
      }
    }
    
    printf("%d %d", ans1 , ans2);
    return 0;
}