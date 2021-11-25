
/**
 * @file 1496_a.cpp
 * 
 * @author tanvir tareq
 * @date 2021-05-17
 * @time 8.17 p.m
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll l=0 , r=n-1;
    // k++;
    while(k--)
    {
        if(s[l]!=s[r] or r<=l)
        {
            cout<<"NO"<<endl;
            return;
        }
        l++, r--;
        if(r<l)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}