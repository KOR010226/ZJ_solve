#include <bits/stdc++.h>
using namespace std;
#define A 2001
#define MAX 1000001
int main() 
{
    int N, sum[A];
    cin >> N;
    pair<int, int> p[A];
    for(int i = 0; i < N; i ++){
      cin >> p[i].first;// weight
    }
    for(int i = 0;i < N ;i ++){
      cin >> p[i].second;// height
    }
    int max = MAX;
    int ans1, ans2;
    for(int i = 0; i < N; i ++){
      sum[i] = p[i].first * p[i].second;
      if(sum[i] < max){
        max = sum[i];
        ans1 = p[i].first;
        ans2 = p[i].second;
      }
    }
    cout << ans1 << " " << ans2 << "\n";
}