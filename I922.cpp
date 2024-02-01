#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num[] = {"ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    pair<string, int> p[1001];
    vector<int> v1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
      cin >> p[i].first >> p[i].second;
    }
    for(int i = 0 ; i < n - 1; i ++){
      for(int j = 0; j < n - 1 - i ; j ++){
        if(p[j].second > p[j + 1].second){
          swap(p[j].first, p[j + 1].first);
          swap(p[j].second, p[j + 1].second);
        }
      }
    }
    for(int i = 0 ;i < n; i ++){
        for(int j = 0; j < 9; j ++){
          if(p[i].first == num[j]){
            cout << j + 1;
          }
        }
      }
}