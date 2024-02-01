#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m, a[1005], cnt = 0;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i ++){
      cin >> a[i];
    }
    
    int temp1 = a[m], temp2 = a[m];
    int j = m - 1, k = m + 1;
    
    for(j ; j >= 1; j --){
      if(a[j] > temp1){
        temp1 = a[j];
        cnt ++;
      }
    }
    
    for(k ; k <= n ;k ++){
      if(a[k] > temp2){
        temp2 = a[k];
        cnt ++;
      }
    }
    
    cout << cnt << endl;
}