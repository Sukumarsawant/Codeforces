/*
find if sumy of any two elements of the array is 8 
5(lengh of array)
1 5 4 2 3 
8 (sum to find)


*/




#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int n ; cin>>n;
 int a[n];
         for(int i =0;i<n;++i){
              cin>>a[i];
      }
      //rule 1 : arrays should be sorted to use 2 sum 
       sort(a,a+n);
               for(int i =0;i<n;++i){
                    cout<<a[i]<<" ";
            }
            cout<<endl;
       //step 2 : create to pseudo pointers 
       int i =0 ,j=n-1;
       int ans ;cin>>ans;  
       int r =0;
       while (i!=j){
        r = a[i]+a[j];
        if(r>ans) j--;
        else if(r<ans) i++;
         else break;
         
       } 
       cout<<i+1<<" "<<j+1;
}

