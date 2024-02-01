#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n][3], score[n];
    
    for(int i = 0; i < n ;i ++){
      for(int j = 0 ; j < 3 ; j ++){
        cin >> a[i][j];
      }
    }
    for(int i = 0 ;i < n; i ++){
      score[i] = 0;
    }// 重置
    
    int max1 = -1, max2 = -1, max3 = -1;
    int tar1, tar2, tar3;
    for(int i = 0; i < n ;i ++){
      if(a[i][0] > max1){
        max1 = a[i][0];
        tar1 = i;
      }
    }
    score[tar1] ++;
    for(int i = 0; i < n ;i ++){
      if(a[i][0] == max1 && i != tar1){
        score[i] ++;
      }
    }
    
    for(int i = 0 ;i < n ;i ++){
      if(a[i][1] > max2){
        max2 = a[i][1];
        tar2 = i;
      }
    }
    score[tar2] ++;
    for(int i = 0 ; i < n ;i ++){
      if(a[i][1] == max2 && i != tar2){
        score[i] ++;
      }
    }
    
    for(int i = 0; i < n; i ++){
      if(a[i][2] > max3){
        max3 = a[i][2];
        tar3 = i;
      }
    }
    score[tar3] ++;
    for(int i = 0; i < n ;i ++){
      if(a[i][2] == max3 && i != tar3){
        score[i] ++;
      }
    }
    int high = -1, ans;
    for(int i = 0; i < n ;i ++){
      if(score[i] > high){
        high = score[i];
        ans = i;
      }
    }
    for(int i = 0; i < n ; i++){
      if(score[i] == high && i < ans){
        ans = i;
        break;
      }
    }
    cout << ans + 1 << endl;
}