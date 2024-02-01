#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i = 0;i < n; i ++){
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    bool no = false;
    for(int i = v.size() - 1; i > 0 ; i --){
      if(v[i] - v[i - 1] != 1){
        no = true;
        break;
      }
    }
    cout << v[0] << " " << v[v.size() - 1] << " ";
    if(!no){
      cout << "yes\n";
    }
    else if(no){
      cout << "no\n";
    }
}