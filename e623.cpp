#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<string> s;
    string PPAP[] = {"Pen", "Pineapple", "Apple", "Pineapple pen"};
    int n, p1, p2, p3, p4, pp1, pp2, pp3, pp4;
    for(int i = 0, j = 1; i <= 10000; i += (4 * j), j ++){
      pp1 = j, pp2 = j, pp3 = j, pp4 = j;
      for(p1 = i ; pp1 > 0 ; p1 ++, pp1 --){
        s.push_back(PPAP[0]);
      }
      for(p2 = p1 + j ; pp2 > 0 ; p2 ++, pp2 --){
        s.push_back(PPAP[1]);
      }
      for(p3 = p2 + j; pp3 > 0 ; p3 ++, pp3 --){
        s.push_back(PPAP[2]);
      }
      for(p4 = p3 + j; pp4 > 0; p4 ++, pp4 --){
        s.push_back(PPAP[3]);
      }
    }
    while(cin >> n){
      cout << s[n - 1] << endl;
    }
}