#include <bits/stdc++.h>
using namespace std;
// bfs 裸題
#define N 202
int n, m, q, x, y;
int a[N][N];

int bfs(int x, int y){
  bool vis[40004] = {0};
  queue<int> q;
  q.push(x);
  vis[x] = true;
  while(!q.empty()){
    int v = q.front();
    q.pop();
    for(int i = 0; i < n; i ++){// 歷遍
      if(!vis[i] && a[v][i]){
        vis[i] = true;
        q.push(i);
      }
    }
  }
  
  if(vis[y]){
    return 1;
  }
  else if(!vis[y]){
    return 0;
  }
}

int main() 
{
    cin >> n >> m >> q;
    
    for(int i = 0;i < m ;i ++){
      int from, to;
      cin >> from >> to;
      a[from][to] = 1;
    }
    
    for(int i = 0;i < q; i ++){
      cin >> x >> y;
      if(bfs(x, y)){
        printf("YES\n");
      }
      else if(!bfs(x, y)){
        printf("NO\n");
      }
    }
}