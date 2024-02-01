#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, n, sum = 0, up, down;
    while(cin >> a >> b){
      if(a > b){
        swap(a, b);
        //int tem = b;
        //b = a;
        //a = tem;
      }
      if(a == - 1 || b == 1){
        continue;
      }
      cout << min(b - a, 100 + a - b) << endl;
    }
      return 0;
}