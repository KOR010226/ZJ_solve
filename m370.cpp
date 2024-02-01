#include <iostream>
using namespace std;

int main() 
{
    int x, n;
    cin >> x >> n;
    int a[10006], right = 0, left = 0;
    int l = x, r = x;
    for(int i = 0; i < n; i ++){
      cin >> a[i];
      if(a[i] < x){
        left ++;
        if(a[i] < l)l = a[i];
      }
      else if(a[i] > x){
        right ++;
        if(a[i] > r)r = a[i];
      }
    }
    
    if(left > right){
      cout << left << ' ' << l << endl;
    }
    else if(right > left){
      cout << right << ' ' << r << endl;
    }
}