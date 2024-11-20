//given an array find if difference of two element is the give target 
// 6
// 5 1 2 3 6 9 
// 2



#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n ; cin>>n ; 
    int a[n];
            for(int i =0;i<n;++i){
                 cin>>a[i];
         }
int r=0 ;
int i=0 ,j=1;
int ans; cin>>ans;
    sort(a,a+n);
            for(int i =0;i<n;++i){
                 cout<<a[i]<<" ";
         }
         cout<<endl;
    bool check= false; 
    while(i!=j)
    {
        r = a[j]-a[i];
        if(r<ans) j++;
        else if ( r == ans) {
            check = true;
            break;
            
        }
        else if(r > ans) i++;

    }
    if(check) cout<<"TRUE"<<" "<<i+1<<" "<<j+1;
    else cout<<"No";
}

