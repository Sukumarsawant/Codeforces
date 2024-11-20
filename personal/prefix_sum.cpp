#include<bits/stdc++.h>
using namespace std;
 //prefix sum 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n ; cin>>n ; 
    int a[n];
            for(int i =0;i<n;++i){
                 cin>>a[i];
         }
         int b[n];
         int sum =0;
         for(int i =0 ; i< n; ++i){
            sum+=a[i];
            b[i]=sum;
         }
                 for(int i =0;i<n;++i){
                      cout<<b[i]<<" ";
              }
}

