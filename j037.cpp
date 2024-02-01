#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v;
    double a, b, c;
    while(cin >> a >> b >> c){
      if(a == 0 && b == 0 && c == 0){
        break;
      }
      bool ok = false;
      v.push_back(a); v.push_back(b); v.push_back(c);
      sort(v.begin(), v.end());
      
      if(sqrt(pow(v[0], 2) + pow(v[1], 2)) == v[2]){
        ok = 1;
      }
      if(ok){
        printf("right\n");
      }
      else{
        printf("wrong\n");
      }
      v.clear();
    }
}