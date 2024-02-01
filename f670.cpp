#include <bits/stdc++.h>
using namespace std;

int ve;
bool edge[11][11], vis[11];

void dfs(int now){
  vis[now] = true;
  for(int i = 1; i <= ve; i ++){
    if(edge[now][i] && ! vis[i]){
      dfs(i);
    }
  }
}

int main() 
{
    int eds, from, to, cnt = 0;
    cin >> ve >> eds;
    
    for(int i = 0; i < eds; i ++){
      cin >> from >> to;
      edge[from][to] = 1;
      edge[to][from] = 1;
    }
    for(int i = 1; i <= ve; i ++){
      if(!vis[i]){
        dfs(i);
        cnt ++;
      }
    }
    cout << cnt << endl;
}