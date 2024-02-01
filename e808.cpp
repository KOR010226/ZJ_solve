#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, hh, mm, ah[21], am[21], x;
    cin >> n;
    cin >> hh >> mm;
    if(hh >= 24){
      hh = 0 + hh - 24;
    }
    if(mm > 60){
      hh += mm / 60;
      mm = mm % 60;
    }
    else if(mm == 60){
      mm -= 60;
      hh ++;
    }
    ah[0] = hh;
    am[0] = mm;
    for(int i = 0 ;i < n; i ++){
      cin >> x;
      ah[i] = hh;
      am[i] = mm + x;
      if(am[i] > 60){
        ah[i] += am[i] / 60;
        am[i] = am[i] % 60;
      }
      else if(am[i] == 60){
        am[i] -= 60;
        ah[i] ++;
      }
      if(ah[i] >= 24){
        ah[i] = ah[i] - 24;
      }
      hh = ah[i];
      mm = am[i];
    }
    for(int i = 0; i < n; i ++){
      cin >> x;
      if(x == 0){
        break;
      }
      else{
        if(ah[x - 1] < 10 && am[x - 1] < 10){
          cout << 0 << ah[x - 1] << ":" << 0 << am[x - 1] << endl; 
        }
        else if(ah[x - 1] >= 10 && am[x - 1] < 10){
          cout << ah[x - 1] << ":" << 0 << am[x - 1] << endl;
        }
        else if(ah[x - 1] < 10 && am[x - 1] >= 10){
          cout << 0 << ah[x - 1] << ":" << am[x - 1] << endl;
        }
        else{
          cout << ah[x - 1] << ":" << am[x - 1] << endl;
        }
      }
    }
}