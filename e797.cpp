#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[11][11];
    int AND[11], OR[11], XOR[11];
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < n ;i ++){
      for(int j = 0; j < m ;j ++){
        cin >> a[i][j];
      }
    }
    
    for(int i = 0 ;i < m; i ++){
      int andd = 0, orr = 0, xorr = 0, cnt_one = 0;
      for(int j = 0 ;j < n; j ++){
        if(a[j][i] != 1) AND[i] = 0, andd ++;
        
        if(a[j][i] == 1) OR[i] = 1, orr ++;
        
        if(a[j][i] == 1){
          cnt_one ++;
        }
      }
      if(!andd) AND[i] = 1;
      
      if(!orr) OR[i] = 0;
      
      if(cnt_one % 2 != 0) XOR[i] = 1;
      else XOR[i] = 0;
    }
    
    cout << "AND: ";
    for(int i = 0; i < m ;i ++){
      if(i == m - 1) cout << AND[i];
      else cout << AND[i] << ' ';
    }
    cout << endl;
    cout << " OR: ";
    for(int i = 0 ;i < m ; i ++){
      if(i == m - 1) cout << OR[i];
      else cout << OR[i] << ' ';
    }
    cout << endl;
    cout << "XOR: ";
    for(int i = 0; i < m ; i ++){
      if(i == m - 1) cout << XOR[i];
      else cout << XOR[i] << ' ';
    }
    cout << endl;
}