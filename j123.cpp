#include <bits/stdc++.h>
using namespace std;
#define pb push_back
// Date : 2024/2/3

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r, c, n;
    int col[55] = {0}; // 紀錄column的最右端

    cin >> r >> c >> n;
    int emp = r*c;//empty
    int i, k;// k -> where start
    int l = 0;//left
    char t;// type

    while(n --){
        cin >> t >> i;

        if(t == 'A'){
            k = max(col[i] + 1, col[i + 1] + 1);
            k = max(k, col[i + 2] + 1);
            k = max(k, col[i + 3] + 1);

            if(k <= c){
                col[i] = col[i + 1] = col[i + 2] = col[i + 3] = k;
                emp -= 4;
            }
            else l ++;
        }

        else if(t == 'B'){
            k = col[i] + 3;
            if(k <= c){
                col[i] = k;
                emp -= 3;
            }
            else l ++;
        }

        else if(t == 'C'){
            k = max(col[i] + 2, col[i + 1] + 2);
            if(k <= c){
                col[i] = col[i + 1] = k;
                emp -= 4;
            }
            else l ++;
        }

        else if(t == 'D'){
            k = max(col[i] + 1, col[i + 1] + 3);
            if(k <= c){
                col[i] = col[i + 1] = k;
                emp -= 4;
            }
            else l ++;
        }

        else{
            k = max(col[i] + 1, col[i + 1] + 2);
            k = max(k, col[i + 2] + 2);
            if(k <= c){
                col[i] = col[i + 1] = col[i + 2] = k;
                emp -= 5;
            }
            else l ++;
        }
    }

    cout << emp << ' ' << l;
    return 0;
}
