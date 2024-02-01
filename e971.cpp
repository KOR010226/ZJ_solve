#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a[101][101];
    cin >> n >> m;
    queue<int> q;
    
    for(int i = 0; i < n ;i ++){
      for(int j = 0 ; j < m; j ++){
        cin >> a[i][j];
        if(a[i][j] == 1){
          q.push(j);
        }
      }
      
          while(q.size() >= 2){
          int k = q.front();
          q.pop();
          int l = q.front();
          q.pop();
          for(k; k < l ; k ++){
            a[i][k] = 1;
          }
        }
      
      while(!q.empty()){
        q.pop();
      }
    }
    
    for(int i = 0; i < n ; i++){
      for(int j = 0 ;j < m ;j ++){
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
    return 0;
}