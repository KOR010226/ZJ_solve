#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[500];
    vector<int> v;
    int n, x;
    int i = 0;
    while(cin >> x){
      if(x == 0){
        break;
      }
      v.push_back(x);
    }
    cin >> n;
    for(int i = 0 ;i < n; i ++){
      int next[31] = {};
      for(int j = 0 ;j < v.size(); j ++){
        next[j] = v[j];
      }
      for(int j = 0;j < v.size(); j ++){
        if(j == 0){// only right
          if(v[j] > v[j + 1]){
            next[j + 1] += v[j] * 0.1;
          }
        }
        
        else if(j == v.size() - 1){// only left
          if(v[j] > v[j - 1]){
            next[j - 1] += v[j] * 0.1;
          }
        }
        
        else{
          if(v[j] > v[j - 1]){// left
            next[j - 1] += v[j] * 0.05;
          }
          if(v[j] > v[j + 1]){// right
            next[j + 1] += v[j] * 0.05;
          }
        }
      }
      for(int i = 0; i < v.size(); i ++){
        v[i] = next[i];
      }
    }
    
    for(int i = 0 ;i < v.size() ;i ++){
      if(i == v.size() - 1) cout << v[i];
      else cout << v[i] << ' ';
    }
    cout << endl;
}