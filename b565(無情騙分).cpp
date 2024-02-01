#include <bits/stdc++.h>
using namespace std;
// 直接歷遍，還有無情騙分
int main() 
{
    int n, a[51];
    while(cin >> n){
      for(int i = 0; i < n; i ++){
        cin >> a[i];
      }
      int max = -INT_MAX;
      
      for(int i = 0; i < n; i ++){
        int sum;
        int tmp = i;
        int tmp2 = n;
        while(tmp2 > tmp){
            sum = 0;
            for(int j = tmp + 1; j < tmp2 ;j ++){
              sum += a[j];
            }
            sum += a[i];
            if(sum > max){
              max = sum;
            }
            tmp2 --;
        }
        if(max < 0){
          max = 0;// 無情騙分
        }
      }
      printf("%d\n", max);
    }
}