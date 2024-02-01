#include <iostream>
using namespace std;

int main() 
{
    int n, i = 1, a[51], m;
    cin >> n;
    while(n --){
      a[51] = {0};
      int high = 0, low = 0;
      cin >> m;
      if(m == 1){
        cin >> a[i];
        cout << "Case " << i << ": " << high << " " << low << endl;
      }
      else{
        for(int i = 0 ;i < m ; i ++){
          cin >> a[i];
        }
        for(int j = 1; j <= m - 1; j ++){
          if(a[j] > a[j - 1]){
            high ++;
          }
          if(a[j] < a[j - 1]){// 別用else因為只比一次
            low ++;
          }
        }
        cout << "Case " << i << ": " << high << " " << low << endl;
      }
      i ++;
      
    }
}