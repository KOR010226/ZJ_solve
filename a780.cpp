#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double fo, fe, FA;
    double M, FT;
    while(cin >> fo >> fe >> FA){
      if(fo == 0 && fe == 0 && FA == 0){
        break;
      }
      M = fo / fe;
      FT = FA / M;
      printf("%.2f %.2f\n", M, FT);
    }
    return 0;
}