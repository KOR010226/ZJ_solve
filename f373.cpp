#include <iostream>
using namespace std;

int main() 
{
    int n;
    while(cin >> n){
      int tai = 0, chi = 0;
      
      if(n >= 1000){
        chi = n - (n / 1000) * 100;
      }
      else{
        chi = n;
      }
      if(n >= 2000){
        tai = n - (n / 2000) * 200;
      }
      else{
        tai = n;
      }
      
      if(tai == 0 && chi == 0){
        cout << n << " " << 0 << endl;
        continue;
      }
      else if(tai < chi){
        cout << tai << " " << 0 << endl;
        continue;
      }
      else if(chi < tai){
        cout << chi << " " << 1 << endl;
        continue;
      }
      else if(chi == tai){
        cout << tai << " " << 0 << endl;
      }
      
    }
}