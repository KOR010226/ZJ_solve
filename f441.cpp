#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int ans[21];
    int n, s, x;
    cin >> n >> s;
    for(int i = 0; i < n; i ++){
      cin >> ans[i];
    }
    int stu;
    cin >> stu;
    while(stu --){
      int sum = 0;
      for(int i = 0; i < n; i ++){
        cin >> x;
        if(x == ans[i]) sum += s;
      }
      cout << sum << endl;
    }
}