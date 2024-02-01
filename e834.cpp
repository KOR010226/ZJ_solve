#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n;
    
    while(cin >> m){
      if(m == 0){
        continue;
      }
      else if(m % n == 0){
        cout << m / n << endl;
      }
      else{
        cout << n - (m % n) << endl;
      }
    }
}
