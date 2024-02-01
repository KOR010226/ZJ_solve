#include <bits/stdc++.h>
using namespace std;

int main() 
{
     int n,x,y,judge=0;
    cin>>n;
    int a[n][n];
    int max[n],min[n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cin>>a[i][j];
    }
    
    for (int i=0;i<n;i++){
        max[i]=a[i][0];
        for (int j=0;j<n;j++){
            if (a[i][j]>max[i]){
                max[i]=a[i][j];
            }
        }
    }
    
    for (int i=0;i<n;i++){
        min[i]=a[0][i];
        for (int j=0;j<n;j++){
            if (a[j][i]<min[i]){
                min[i]=a[j][i];
            }
        }
    }
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (max[i]==min[j]){
                x=i;
                y=j;
                judge=1;
                break;
            }
        }
    }
    
    if (judge==1){
        cout<<x<<" "<<y;
    }
    else{
      cout<<"NO";
    }
    return 0;
}