#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define MX 1000000
using namespace std;

ll dp[MX];

int main()
{
    fast;

    ll a, b, c, d;
    cin>>a>>b>>c>>d;


    for(ll i=a;i<=b;i++)
    {
        dp[i+b]=min(i-a+1, c-b+1);
    }
    for(ll i=b;i<=c;i++)
    {
        dp[i+b]=min(b-a+1, c-i+1);
    }
    for(ll i=MX-1;i>=0;i--)
    {
        dp[i]+=dp[i+1];
    }
    ll ct=0;
    for(ll i=c;i<=d;i++)
    {
        ct+=dp[i+1];
    }
    cout<<ct<<endl;

    return 0;
}


