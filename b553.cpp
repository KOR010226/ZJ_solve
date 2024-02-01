#include <bits/stdc++.h>
using namespace std;

int def(int n){
  int sum = 0;
  while(n != 1){
    if(n % 2 == 0){
      n /= 2;
      sum ++;
    }
    if(n > 1 && n % 2 == 1){
      n = 3 * n + 1;
      sum ++;
    }
  }
  return sum ;
}

int main() 
{
    int n;
    
    while(cin >> n){
      cout << def(n) << endl;
    }
}