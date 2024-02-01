#include <bits/stdc++.h>
using namespace std;
// map
int main() 
{
    map<char,int> A;

    A['a']=1,A['b']=2,A['c']=3,A[' ']=1;
    
    A['d']=1,A['e']=2,A['f']=3;
    
    A['g']=1,A['h']=2,A['i']=3;
    
    A['j']=1,A['k']=2,A['l']=3;
    
    A['m']=1,A['n']=2,A['o']=3;
    
    A['p']=1,A['q']=2,A['r']=3,A['s']=4;
    
    A['t']=1,A['u']=2,A['v']=3;
    
    A['w']=1,A['x']=2,A['y']=3,A['z']=4;

    int n;
    int i = 1;
    string s;
    cin >> n;
    n += 1;
    while(n --){
      int sum = 0;
      getline(cin, s);
      if(s == ""){
        continue;// 測資裡有神奇的空格
      }
      
      for(int i = 0; i < s.size();i ++){
        for(auto it = A.begin(); it != A.end(); ++it){
          if(s[i] == (*it).first){
            sum += (*it).second;
          }
        }
      }
      
      printf("Case #%d: %d\n", i, sum);
      i ++;
    }
}