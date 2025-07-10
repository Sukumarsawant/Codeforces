//zorojuro clean temp

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
using ll = long long;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vpi = vector<pair<int,int>>;
using vpl = vector<pair<ll,ll>>;
#define max_pq priority_queue<int>
#define min_pq priority_queue<int, vector<int>, greater<int>>
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
#define rt return
#define endl '\n'
#define int ll
#define tc  cerr << "Time: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s\n";
void solve();
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1; 
    // cin>>t;
    while(t--){
        solve();
    }

}
// int func(vll dp ,int x,vll v){
//     if(dp[x]==1) return 1;
//     return dp
// }
void solve(){
    int n, x ; cin>>n>>x;
    vll v(n);
    for(auto &x:v) cin>>x;

    //dp[i] = no. of coins required from the set to reach i 
    //dp[x] such that x belongs to the set is 1
    // trans -> dp[i]  = min (dp[i-ci])+1 >> i-> (1->n)
    // final state -> dp[x] 
    // n*x ->
        vll dp(x+1,1e9);
    dp[0] = 0;
    for(int i =0 ;i<n;++i){
       if(v[i]<=x)// single coin is less than total 
        dp[v[i]] = 1;
    }       
    // int temp = func(dp,x,v);
    for(int i =1;i<=x;++i){
        for(int j = 0;j<n;++j){
            if(i>=v[j])
            dp[i] = min(dp[i-v[j]]+1,dp[i]);
        // cerr<<"lg\n";
        }
    }

    if(dp[x]>=1e9) cout<<-1<<endl;
    else cout<<dp[x]<<endl;
}


