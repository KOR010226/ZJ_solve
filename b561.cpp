#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    while(cin >> n){
      double N1[21], N2[21];
      double sum_N1 = 0, sum_N2 = 0;
      for(int i = 0; i < n; i ++){
        cin >> N1[i];
        N1[i] /= 2;
        sum_N1 += (pow(N1[i], 2) * 3.14159);
      }
      cin >> m;
      for(int i = 0; i < m ;i ++){
        cin >> N2[i];
        N2[i] /= 2;
        sum_N2 += (pow(N2[i], 2) * 3.14159);
      }
      double ans = abs(sum_N1 - sum_N2);
      printf("%.2f\n", ans);
    }
}