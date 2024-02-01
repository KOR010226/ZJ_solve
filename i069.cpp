#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, x[104];
    vector<int> v;
    cin >> n;
    int sum = 0, tar1, tar2;
    
    for(int i = 0; i < n; i ++){
      cin >> x[i];
      sum += x[i];
      v.push_back(x[i]);
    }
    
    sort(v.begin(), v.end());
    int max = v[n - 1], min = v[0];
    
    for(int i = 0; i < n ;i ++){
      if(x[i] == max){
        max = x[i];
        tar1 = i;
      }
      if(x[i] == min){
        min = x[i];
        tar2 = i;
      }
    }
    int ave = sum / n;
    int d = max - ave;
    max -= d, min += d;
    
    x[tar1] = max, x[tar2] = min;
    
    for(int i = 0; i < n; i ++){
      printf("%d ", x[i]);
    }
    return 0;
}