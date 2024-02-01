#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[1001][101], d1[1001], d2[1001], numb[1001];
    int n, m;
    cin >> n >> m;
    
    for(int i = 0;i < n; i ++){
      numb[i] = i + 1;// 座號
    }
    int max1 = -1, max2 = -1;
    int max1_num, max2_num;
    for(int i = 0; i < n; i ++){
      for(int j = 0; j < m ;j ++){
        cin >> a[i][j];
      }
      
      for(int k = m - 1; k > 0;k --){
        if(a[i][k] > a[i][k - 1]){
          d1[i] += a[i][k] - a[i][k - 1];// 進
      }
        else if(a[i][k] < a[i][k - 1]){
          d2[i] += a[i][k - 1] - a[i][k];// 退
        }
      }
      
      if(d1[i] > max1){
        max1 = d1[i];
        max1_num = numb[i];
      }
      else if(d1[i] == max1){
        if(numb[i] < max1_num){
          max1_num = numb[i];
        }
      }
      if(d2[i] > max2){
        max2 = d2[i];
        max2_num = numb[i];
      }
      else if(d2[i] == max2){
        if(numb[i] < max2_num){
          max2_num = numb[i];
        }
      }
    }
    
    cout << max1_num << endl << max2_num << endl;
    
}