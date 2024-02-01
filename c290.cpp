#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int sum_even = 0, sum_odd = 0;
    for(int i = 0 ;i < s.size() ; i ++){
      if(i % 2 == 0){
        sum_odd += (s[i] - 48);
      }
      else if(i % 2){
        sum_even += (s[i] - 48);
      }
    }
    cout << abs(sum_odd - sum_even) << endl;
}