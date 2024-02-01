#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int gift[101];
    int n, k, x;
    cin >> n >> k;
    int sum = 0;
    for(int i = 0 ;i < 101 ;i ++){
      gift[i] = 0;
    }
    for(int i = 0 ;i < n ;i ++){
      cin >> x;
      gift[x] ++;
    }
    
    for(int i = 0; i < 101; i ++){
      if(gift[i] > 0){
        sum += gift[i] / k;
      }
    }
    
    cout << sum << endl;
}