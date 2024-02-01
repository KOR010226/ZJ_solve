#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int n, a, cnt[20005], p[20005], mx; //cnt 計次數
vector<int> ans;// 找重複次數最高
set<int> st;// 用set計算全部的num

bool cmp(int x, int y){
  return p[x + 10000] < p[y + 10000]; // 升序排序
}

int main() 
{
    cin >> n;
    
    for(int i = 1 ; i <= n ;i ++){
      cin >> a;
      cnt[a + 10000]++;
      if(!p[a + 10000]){
        p[a + 10000] = i;
      }
      st.insert(a);
    }
    
    mx = 2;
    
    for(int i = 0; i < 20005;i ++){
      if(cnt[i] > mx){
        ans.clear();// 重置
        ans.push_back(i - 10000);
        mx = cnt[i];
      }
      else if(cnt[i] == mx){
        ans.push_back(i - 10000);// 重複次數同為最高
      }
    }
    
    if(ans.empty()){
      cout << n << "\nNO\n";
      return 0;
    }
    sort(ans.begin(), ans.end(), cmp);// 自訂義排序
    
    cout << st.size() << "\n";
    
    for(int i : ans){
      cout << i << " ";
    }
}