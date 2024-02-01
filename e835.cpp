#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    if(n <= 2500){
      cout << 1 << " ";
      if(n % 25 == 0){
          cout << n / 25 << " ";
        }
      else{
          cout << n / 25 + 1 << " ";
        }
      if(n % 25 == 0){
        cout << 25 << " ";
      }
      else{
        cout << n % 25 << " ";
      }
    }
    
    else if(n >= 7500){
      n -= 7500;
      cout << 3 << " ";
      if(n % 25 == 0){
        cout << n / 25 << " ";
      }
      else{
        cout << n / 25 + 1 << " ";
      }
      if(n % 25 == 0){
        cout << 25 << " ";
      }
      else{
        cout << n % 25 << " ";
      }
    }
    
    else{
      cout << 2 << " ";
      n -= 2500;
      
      if(n % 50 == 0){
        cout << n / 50 << " ";
      }
      else{
        cout << n / 50 + 1 << " ";
      }
      
      if(n % 50 == 0){
        cout << 50 << " ";
      }
      else{
        cout << n % 50 << " ";
      }
    }
}
