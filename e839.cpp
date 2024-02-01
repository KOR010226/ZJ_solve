#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    vector<string> v1, v2, ans;
    string s1, s2, tar ;
    cin >> n ;
    for(int i = 0 ;i < n; i ++){
      cin >> s1 >> s2;
      v1.push_back(s1);
      v2.push_back(s2);
    }
    cin >> tar;
    for(int i = 0; i < v2.size(); i ++){
      if(v2[i] == tar){
        ans.push_back(v1[i]);
      }
    }
    if(ans.empty()){
      cout << "No\n";
    }
    else{
      sort(ans.begin(), ans.end());// 字典序可使用(由小到大)
      for(int i = 0; i < ans.size(); i ++){
        cout << ans[i] << endl;
      }
    }
    return 0;
}