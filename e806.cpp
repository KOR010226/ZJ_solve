#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num[1001] = {0};
    int n1, n2, p1, c1, p2, c2;
    
    while(cin >> n1){
      bool ok = false;
      while(n1 --){
        cin >> p1 >> c1;
        num[p1] += c1;
      }
      cin >> n2;
      
      while(n2 --){
        cin >> p2 >> c2;
        num[p2] += c2;
      }
      
      for(int i = 1000; i >= 0; i --){
        if(num[i]){
          ok ++;
          cout << i << ':' << num[i] << endl;
        }
      }
      if(!ok) cout << "NULL!\n";
    }
}