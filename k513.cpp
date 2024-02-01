#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int s, m, b, n, car, cnt = 0;
    cin >> s >> m >> b >> n;
    
    for(int i = 0; i < n; i ++){
      cin >> car;
      if(car < 200 && (s + m + b) > 0){
        if(s > 0){
          cnt ++;
          s --;
          continue;
        }
        else if(m > 0){
          cnt ++;
          m --;
          continue;
        }
        else if(b > 0){
          cnt ++;
          b --;
          continue;
        }
      }
      else if(car >= 200 && car < 500){
        if(m > 0){
          cnt ++ ;
          m --;
          continue;
        }
        else if(b > 0){
          cnt ++;
          b --;
          continue;
        }
      }
      if(car >= 500 && b > 0){
        cnt ++;
        b --;
      }
    }
    
    cout << cnt << endl;
    return 0;
}