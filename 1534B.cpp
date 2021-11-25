#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;

    ll a[n+4];
    a[0]=a[n+1]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    ll ct=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>a[i-1] and a[i]>a[i+1])
        {

            ll x=max(a[i+1], a[i-1]);
            ct+=abs(x-a[i]);
            a[i]=x;
        }
    }
    for(int i=1;i<=n;i++)
    {
        ct+=abs(a[i-1]-a[i]);
    }
    ct+=a[n];
    cout<<ct<<endl;

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