#include<bits/stdc++.h>
using namespace std;
using ll = long long ; 
#define int ll
#define M 1000000007
signed main() {
  int n ;
  cin>>n;
 vector<int> dp(n+1);
 dp[0]=1;
 
 for(int i =1;i<=n;++i){
   for(int j=1;j<=6;++j)
   if(j<=i)
    dp[i]=(dp[i]+dp[i-j])%M;
   }
 cout<<dp[n]<<endl;
 
