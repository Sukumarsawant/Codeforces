////////////////////////////////////////////
/*
7
3
2 3 5 2 9 7 1 
*/////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n ; cin>>n;
    int k  ; cin>> k ;
    int a[n];
            for(int i =0;i<n;++i){
                 cin>>a[i];
         }
int maxi=0, temp ;
            for(int i =0;i<=n-k;++i){int x=0 ;
                         for(int j =i;j<i+k;++j){
                            x+=a[j];

                      }
                      maxi = max(maxi,x);
                      x = 0;
         }
         cout<<maxi;
}

