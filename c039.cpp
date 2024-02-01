#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i, j, max, length, tmp;
    while(cin >> i >> j){
      if(i > j){
        max = 0;
        for(int k = j; k <= i ;k ++){
          tmp = k;// 另外叫tmp
          length = 1;
          while(tmp != 1){
            length ++;
            if(tmp % 2){
              tmp = tmp * 3 + 1;
            }
            else{
              tmp /= 2;
            }
          }
          if(length > max){
            max = length;
          }
        }
      }
      
      else{
        max = 0;
        for(int l = i; l <= j ; l ++){
          tmp = l;// 另外叫tmp
          length = 1;
          while(tmp != 1){
            length ++;
            if(tmp % 2){
              tmp = tmp * 3 + 1;
            }
            else{
              tmp /= 2;
            }
          }
          if(length > max){
            max = length;
          }
        }
      }
      cout << i << " " << j << " " << max << endl;
    }
    return 0;
}