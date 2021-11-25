#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, x, t;
    cin>>n>>x>>t;
    ll ct=t/x;
    if(ct>=n-1)
    {
        ct=n-1;
        cout<<ct*(ct+1)/2<<endl;
    }
    else
    {
        n=n-1;
        ll y=ct*(ct+1)/2;
        y+=(n-ct)*ct;
        cout<<y<<endl;
    }

}

int main()
{

    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}