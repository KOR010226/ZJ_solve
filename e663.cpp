#include <bits/stdc++.h>
using namespace std;
//假設小朋友編號按照體重排列為a,b,c,d,e

//所以十組分別為a+b,a+c,a+d,a+e,b+c,b+d,b+e,c+d,c+e,d+e

//可以發現每個小朋友的體重都加了4次 所以總和除以4就是全部小朋友的體重和

//而把它給的10個組合排序後 其實第一組就是a+b,最後一組(第十組)就是d+e 可推得c就是體重和減掉第一組和第十組

//因為第十組就是d+e 所以第九組就會是僅次於d+e的c+e 得e=第九組減掉c；d=第十組減掉e

//因為第一組就是a+b 所以第二組就會是小於b+c但大於a+b的a+c 得a=第二組減掉c；b=第一組減掉a

//這樣一來全部小朋友的體重就出來了
int main() 
{
    int n[10], a, b ,c, d, e;
    while(cin >> n[0]){
      int sum = 0;
      sum += n[0];
      for(int i = 1; i <= 9; i ++){
        cin >> n[i];
        sum += n[i];
      }
      sum /= 4;
      sort(n, n + 10);
      c = sum - (n[9] + n[0]);
      e = n[8] - c;
      d = n[9] - e;
      a = n[1] - c;
      b = n[0] - a;
      
      printf("%d %d %d %d %d\n", a, b, c, d, e);
    }
}