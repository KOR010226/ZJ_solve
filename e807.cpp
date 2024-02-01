#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double rain[7];
    double m, a, n, e;
    double mm[4];
    for(int i = 1, j = 0, k = 0, l = 1, o = 2, u = 3; i <= 7; i ++, j ++){
      cin >> m >> a >> n >> e;
      rain[j] = m + a + n + e;
      mm[k] += m;
      mm[l] += a;
      mm[o] += n;
      mm[u] += e;
    }
    double max1 = -1, max2 = -1;
    int ans1, ans2;
    for(int i = 0 ; i < 7; i ++){
      if(rain[i] > max1){
        max1 = rain[i];
        ans1 = i + 1;
      }
    }
    for(int i = 0; i < 4; i ++){
      if(mm[i] > max2){
        max2 = mm[i];
        ans2 = i + 1;
      }
    }
    cout << ans1 << endl;
    
    if(ans2 == 1){
      cout << "morning\n";
    }
    else if(ans2 == 2){
      cout << "afternoon\n";
    }
    else if(ans2 == 3){
      cout << "night\n";
    }
    else{
      cout << "early morning\n";
    }
    return 0;
}