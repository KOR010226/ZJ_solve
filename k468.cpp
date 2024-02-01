#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> tar;
    int n, s, f, x;
    cin >> n >> s >> f;
    
    for(int i = 0;i < n; i ++){
      cin >> x;
      tar.push_back(x);
    }
    
    int cnt = 0, shoot = 0;
    bool ok = 0;
    for(int i = 0;i < tar.size(); i ++){
      shoot ++;
      if(tar[i] == f){
        cnt ++;
        if(cnt == s){
          cout << shoot << endl;
          break;// 到了就停
        }
        for(int j = i + 1; j < tar.size(); j ++){
          if(tar[i] == tar[j]){
            cnt ++;
            tar.erase(tar.begin() + j);// knock out
            break;
          }
        }
        
      }

      else if(tar[i] != f){
        for(int j = i + 1; j < tar.size(); j ++){
          if(tar[i] == tar[j]){
            tar.erase(tar.begin() + j);// knock out
            break;
          }
        }
      }
      
      if(cnt == s){
        cout << shoot << endl;
        break;
      }
    }
}