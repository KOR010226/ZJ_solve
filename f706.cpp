#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    
    int a = (h * 60 + m) + 90 * t;// 2160 / 24
    
    if(a > 2160){// 下一天, 算總共過幾分鐘
      a -= 2160;
    }
    else if(a < 0){// 前一天, 算總共過幾分鐘
      a += 2160;
    }
    
    h = a / 60, m = a % 60;
    
    cout << h << ':';
    if(m < 10){
      cout << 0 << m << ":";
    }
    else{
      cout << m << ":";
    }
    
    if(s < 10){
      cout << 0 << s;
    }
    else{
      cout << s;
    }
}