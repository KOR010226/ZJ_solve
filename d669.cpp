#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int h1, m1, h2, m2;
    while(cin >> h1 >> m1 >> h2 >> m2){
      if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
        break;
      }
      int  sum1 = h1 * 60 + m1;
      int  sum2 = h2 * 60 + m2;
      if(sum1 < sum2){
        cout << sum2 - sum1 << endl;
      }
      else if(sum1 > sum2){
        cout << 1440 - sum1 + sum2 << endl;
      }
      else if(sum1 = sum2){
        cout << 0 << endl;
      }
    }
}