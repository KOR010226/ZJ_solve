#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int k, w, s, e, cnt = 0;
    
    while(cin >> k >> w >> s >> e){
      if(k <= 2){
        cnt += 20;
      }
      else if(k > 2){
        cnt += 20 + (k - 2) * 5;
      }
      if(w >= 2){
        cnt += (w / 2) * 5;
      }
      
      if(e == 19){
        cnt += 185;
      }
      else if(e == 20){
        if(s == 19){
          cnt += 195;
        }
        else{
          cnt += 380;
        }
      }
      else if(e == 21){
        if(s == 20){
          cnt += 205;
        }
        else if(s == 19){
          cnt += 400;
        }
        else{
          cnt += 585;
        }
      }
      else if(e == 22){
        if(s == 21){
          cnt += 215;
        }
        else if(s == 20){
          cnt += 420;
        }
        else if(s == 19){
          cnt += 615;
        }
        else{
          cnt += 800;
        }
      }
      else if(e == 23){
        if(s == 22){
          cnt += 225;
        }
        else if(s == 21){
          cnt += 440;
        }
        else if(s == 20){
          cnt += 645;
        }
        else if(s == 19){
          cnt += 840;
        }
        else{
          cnt += 1025;
        }
      }
      
      printf("%d\n", cnt);
    }
}