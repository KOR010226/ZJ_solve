#include <bits/stdc++.h>
using namespace std;

int main() 
{
    pair<char, double> p[201];
    int n;
    double d, v;
    cin >> n;
    for(int i = 0; i < n; i ++){
      cin >> p[i].first;
      cin >> d >> v;
      p[i].second = (d / v);
    }
    
    for(int i = 0;i < n - 1; i ++){
      for(int j = 0;j < n - 1 - i; j ++){
        if(p[j].second > p[j + 1].second){
          swap(p[j].second, p[j + 1].second);
          swap(p[j].first, p[j + 1].first);
          continue;
        }
        else if(p[j].second == p[j + 1].second){
          if(p[j].first == 'N'){
            if(p[j + 1].first == 'S' || p[j + 1].first == 'E' || p[j + 1].first == 'W'){
              swap(p[j].first, p[j + 1].first);
            }
          }
          else if(p[j].first == 'E'){
            if(p[j + 1].first == 'S' || p[j + 1].first == 'W'){
              swap(p[j].first, p[j + 1].first);
            }
          }
          else if(p[j].first == 'S'){
            if(p[j + 1].first == 'W'){
              swap(p[j].first, p[j + 1].first);
            }
          }
      
        }
      }
    }
    for(int i = 0 ;i < n ;i ++){
      cout << p[i].first;
    }
    cout << endl;
}