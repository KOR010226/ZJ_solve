#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
    vector<int> v;
    int n, x;
    cin >> n;
    int max = -1, min = INT_MAX;
    int best = 0, worst = 0;
    for(int i = 0; i < n ;i ++){
      cin >> x;
      v.push_back(x);
      if(x < 60){
        best += 1;
        if(x > max){
          max = x;
        }
      }
      if(x >= 60){
        worst += 1;
        if(x < min){
          min = x;
        }
      }
    }
    
    sort(v.begin(), v.end());
    for(int i = 0;i < v.size();i ++){
      cout << v[i] << " ";
    }
    cout << endl;
    if(best > 0){
      cout << max << endl;
    }
    else{
      cout << "best case\n";
    }
    
    if(worst > 0){
      cout << min << endl;
    }
    else{
      cout << "worst case" << endl;
    }
}