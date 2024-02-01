#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    while(cin >> n){
      priority_queue<pair<int, int>> pq;
      while(n --){
        int s, d;
        cin >> s >> d;
        pq.push({d, s});
      }
      int Max = 0;
      for(int now = 0; pq.size(); pq.pop()){
        now += pq.top().second;
        Max = max(Max, pq.top().first + now);
      }
      cout << Max << endl;
    }
}