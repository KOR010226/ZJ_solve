#include <bits/stdc++.h>
using namespace std;
// 直接模擬
int main() 
{
    vector<int> v1, v2, v3;
    int n, m, a[301];
    cin >> n >> m;
    for(int i = 0; i < n / 2 ; i ++){
      cin >> a[i];
      v1.push_back(a[i]);
    }
    for(int i = n / 2; i < n ; i++){
      cin >> a[i];
      v2.push_back(a[i]);
    }
    if(m == 1){
      for(int i = 0; i < n / 2; i ++){
        v3.push_back(v1[i]);
        v3.push_back(v2[i]);
      }
      for(int i = 0; i < n ; i ++){
        cout << v3[i] << " ";
      }
      printf("\n");
    }
    else{
    for(int i = 0 ;i < m - 1 ; i ++){
      v3.clear();
      for(int i = 0; i < n / 2; i ++){
        v3.push_back(v1[i]);
        v3.push_back(v2[i]);
      }
      v1.clear(); v2.clear();
      for(int i = 0; i < n / 2; i ++){
        v1.push_back(v3[i]);
      }
      for(int i = n / 2; i < n ; i ++){
        v2.push_back(v3[i]);
      }
    }
    
    for(int i = 0 ;i < n / 2; i ++){
        cout << v1[i] << " " << v2[i] << " ";
      }
    }
}