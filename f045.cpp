#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v1, v2;
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i ++){
      v1.push_back(s[i] - 48);
      v2.push_back(s[i] - 48);
    }
    sort(v1.begin(), v1.end());
    
    int sum = pow(v1[8], 2) + pow(v1[7], 2);
    int tar = v2[6] * 100 + v2[7] * 10 + v2[8];
    
    if(sum == tar){
      printf("Good Morning!\n");
    }
    else{
      printf("SPY!\n");
    }
}