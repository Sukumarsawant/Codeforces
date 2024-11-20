// 7 (array lenth)
// 3   (winndow/subarray length)
// 2 3 5 2 9 7 1 



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

    int maxi = 0  ; int win_sum =0 ;
    //calculating the first window 
    // fix karne ke lie 
            for(int i =0;i<k;++i){
                 win_sum+=a[i];
         }
         // we can set max to 0 but hum use first element ke equal bhi rakh sakhte hai
    maxi = win_sum;

            for(int i =k;i<n;++i){
                 win_sum+=a[i]-a[i-k];
                 maxi = max(win_sum,maxi);
         }
         cout<<maxi;


}

