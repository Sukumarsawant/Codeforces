//scroll down for HINT /


//

void solve(){
   
   int n; cin>>n ;
   int q ; 
   cin>>q;
   vector<vector<char>> v(n,vector<char>(n));
   vector<vector<int>>p(n,vector<int>(n));
   for(int i =0;i<n;++i){
    for(int j=0;j<n;++j){
        cin>>v[i][j];
    }
   }
   for(int i =0;i<n;++i){
    for(int j=0;j<n;++j){
        p[i][j]=(v[i][j]=='*')?1:0;
        if(i>0) p[i][j]+=(p[i-1][j]);
        if(j>0) p[i][j]+=(p[i][j-1]);
        if(i>0 && j>0) p[i][j]-=(p[i-1][j-1]);
    }

   }
   int l1,r1,l2,r2;

   while(q--){
   cin>>l1>>r1>>l2>>r2;
   l1--;r1--;l2--;r2--;
   int sum =p[l2][r2];
  
    if(l1>0) sum-=p[l1-1][r2];
    if(r1>0) sum-=p[l2][r1-1]; 
    if(l1>0 && r1>0) sum+=p[l1-1][r1-1];



   cout<<sum<<endl;

}
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    
   //
    while(t--){
        solve();
    }
    return 0;
}







///2D PREFIX SUM :)
