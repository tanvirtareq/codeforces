#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<ll> b[2];
    for(int i=0;i<n;i++)
    {
        b[a[i]%2].push_back(a[i]);
    }
    ll tt=n-1;
    ll ct=0;
    for(int i=0;i<b[0].size();i++)
    {
        ct+=tt;
        tt--;
    }
    for(int i=0;i<b[1].size();i++)
    {
        for(int j=i+1;j<b[1].size();j++)
        {
            ct+=(__gcd(b[1][i], 2*b[1][j])>1);
        }
    }
    cout<<ct<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
