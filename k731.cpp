#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, x, y, x1, y1, sum_l = 0, sum_r = 0, sum_re = 0;
    char dir;
    cin >> n >> x >> y;
    
    if(x > 0){
      dir = 'E';
    }
    if(y > 0){
      dir = 'N';
    }
    
    for(int i = 0; i < n - 1; i ++){
      cin >> x1 >> y1;
      
      if(y1 > y){
        if(dir == 'E'){
          sum_l ++;
          dir = 'N';
          x = x1, y = y1;
        }
        if(dir == 'W'){
          sum_r ++;
          dir = 'N';
          x = x1, y = y1;
        }
        if(dir == 'S'){
          sum_re ++;
          dir = 'N';
          x = x1, y = y1;
        }
        else{
          dir = 'N';
          x = x1, y = y1;
        }
      }
      
      if(y1 < y){
        if(dir == 'E'){
          sum_r ++;
          dir = 'S';
          x = x1, y = y1;
        }
        if(dir == 'W'){
          sum_l ++;
          dir = 'S';
          x = x1, y = y1;
        }
        if(dir == 'N'){
          sum_re ++;
          dir = 'S';
          x = x1, y = y1;
        }
        else{
          dir = 'S';
          x = x1, y = y1;
        }
      }
      
      if(x1 > x){
        if(dir == 'W'){
          sum_re ++;
          dir = 'E';
          x = x1, y = y1;
        }
        if(dir == 'N'){
          sum_r ++;
          dir = 'E';
          x = x1, y = y1;
        }
        if(dir == 'S'){
          sum_l ++;
          dir = 'E';
          x = x1, y = y1;
        }
        else{
          dir = 'E';
          x = x1, y = y1;
        }
      }
      
      if(x1 < x){
        if(dir == 'E'){
          sum_re ++;
          dir = 'W';
          x = x1, y = y1;
        }
        if(dir == 'N'){
          sum_l ++;
          dir = 'W';
          x = x1, y = y1;
        }
        if(dir == 'S'){
          sum_r ++;
          dir = 'W';
          x = x1, y = y1;
        }
        else{
          dir = 'W';
          x = x1, y = y1;
        }
      }
    }
    
    cout << sum_l << ' ' << sum_r << ' ' << sum_re << endl;
}