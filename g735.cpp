#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n], ti[n];
    for(int i = 0;i < n ; i ++){
      cin >> a[i];
    }
    for(int i = 0; i < n; i ++){
      ti[i] = 1;
    }
    
    for(int i = 0;i < n ;i ++){
      for(int j = 0; j < n ;j ++){
        if(a[i] < a[j]){
          ti[i] ++;
        }
      }
    }
    
    for(int i = 0;i < n ;i ++){
      cout << ti[i] << " ";
    }
    printf("\n");
}