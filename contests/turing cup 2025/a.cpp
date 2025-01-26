//question a 
//link - https://arena.siesgst.ac.in/contest/TCF25/problem/TCF25A
#include<bits/stdc++.h>
using namespace std;
using ll = long long ; 
int main(){
    ll t; cin>> t ; 
    while (t--){
        ll x , m ; cin>>x>>m;
        ll exp =1,lvl=0,ct=0;
        for(int i =0;i<m;++i){
            if(lvl<x){
                lvl+=exp;
                exp=lvl;
                if(lvl>=x){
                    lvl=0;
                    ct++;
                    
                }
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
