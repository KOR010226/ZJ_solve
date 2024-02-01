#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s1[101], s2[101];
    for(int i = 0; i < n; i ++){
      cin >> s1[i] >> s2[i];
    }
    
    for(int i = 0;i < n - 1; i ++){
      for(int j = 0;j < n - 1 - i; j ++){
        if(s1[j][0] > s1[j + 1][0]){
          swap(s1[j], s1[j + 1]);
          swap(s2[j], s2[j + 1]);
        }
      }
    }
    
    int len = 9;
    
    for(int i = 0;i < n - 1; i ++){
      for(int j = 0; j < n - 1 - i; j ++){
        if(s1[j][len - 1] > s1[j + 1][len - 1]){
          swap(s1[j], s1[j + 1]);
          swap(s2[j], s2[j + 1]);
        }
      }
    }
    
    for(int i = 0; i < n; i ++){
      cout << s1[i][len - 1] << ": " << s2[i] << endl;
    }
}