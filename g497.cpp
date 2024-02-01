#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, a[5001];
    cin >> n;
    int sum = 0;
    
    for(int i = 0 ; i < n; i ++){
      cin >> a[i];
    }
    sum += (a[0] - 1) * 3;
    for(int i = 0; i < n - 1; i ++){
      if(a[i + 1] > a[i]) sum += 3 * (a[i + 1] - a[i]);
      else if(a[i + 1] < a[i]) sum += 2 * (a[i] - a[i + 1]);
    }
    printf("%d\n", sum);
}