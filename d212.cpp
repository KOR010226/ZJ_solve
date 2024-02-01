#include<iostream>
#include<vector>
using namespace std;

typedef long long LL;

vector<LL>dp(105,-1);
LL DP(int N){
    if(dp[N]!=-1) return dp[N];
    dp[N]=DP(N-1)+DP(N-2);
    return dp[N];
}
int main(){
    int N;
    dp[1]=1; dp[2]=2;
    while(cin>>N){
        cout<<DP(N)<<"\n";
    }
    return 0;
}
