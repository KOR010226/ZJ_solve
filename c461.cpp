#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c;
    
    while(cin >> a >> b >> c){
      bool aa1 = false, aa2 = false, aa3 = false;
      
      if(a == 0 && b == 0){
        if(c == 0){
          cout << "AND" << "\n";
          aa1 = true;
          cout << "OR" << "\n";
          aa2 = true;
          cout << "XOR" << "\n";
          aa3 = true;
        }
      }
      
      if(a != 0 && b == 0){
        if(c == 0){
          cout << "AND" << "\n";
          aa1 = true;
        }
        else if(c == 1){
          cout << "OR" << "\n";
          aa2 = true;
          cout << "XOR" << "\n";
          aa3 = true;
        }
      }
      
      if(a == 0 && b != 0){
        if(c == 0){
          cout << "AND" << "\n";
          aa1 = true;
        }
        if(c == 1){
          cout << "OR" << "\n";
          aa2 = true;
          cout << "XOR" << "\n";
          aa3 = true;
        }
      }
      
      if(a != 0 && b != 0){
        if(c == 1){
          cout << "AND" << "\n";
          aa1 = true;
          cout << "OR" << "\n";
          aa2 = true;
        }
        if(c == 0){
          cout << "XOR" << "\n";
          aa3 = true;
        }
      }
      
      if(aa1 == 0){
        if(aa2 == 0){
          if(aa3 == 0){
            cout << "IMPOSSIBLE" ;
          }
        }
      }
    }
}