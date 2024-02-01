#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int f, n, y[10];
    cin >> f >> n;
    bool win = false, lose = false;
    for(int i = 0 ;i < n; i ++){
      cin >> y[i];
    }
    for(int i = 0, j = 1; i < n; i ++, j ++){
      if(i > 0){
        if(i >= 2 && (y[i - 1] == y[i - 2])){
          if(y[i - 1] == 5){
            f = 2;
          }
          else if(y[i - 1] == 2){
            f = 0;
          }
          else if(y[i - 1] == 0){
            f = 5;
          }
        }
          else{
            f = y[i - 1];
          }
      }
      
      cout << f << ' ';
      
      if(f == 0){
        if(y[i] == 2){
          win = true;
          cout << ": Won at round " << j;
          break;
        }
        else if(y[i] == 5){
          lose = true;
          cout << ": Lost at round " << j;
          break;
        }
      }
      
      if(f == 2){
        if(y[i] == 5){
          win = true;
          cout << ": Won at round " << j;
          break;
        }
        else if(y[i] == 0){
          lose = true;
          cout << ": Lost at round " << j;
          break;
        }
      }
      
      if(f == 5){
        if(y[i] == 0){
          win = true;
          cout << ": Won at round " << j;
          break;
        }
        else if(y[i] == 2){
          lose = true;
          cout << ": Lost at round " << j;
          break;
        }
      }
    }
       if(!win && !lose) cout << ": Drew at round " << n << "\n";
    return 0;
}