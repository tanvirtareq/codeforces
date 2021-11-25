/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-19 14:02:26 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-19 14:42:18
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{   
    ll n;
    cin>>n;
    ll a[n+3];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    map<ll, ll> mp;
    ll dp[n+3];
    for(int i=n;i>=1;i--)
    {
        ll x=mp[a[i]];
        dp[i]=x;
        x+=n-i+1;
        mp[a[i]]=x;
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=i*dp[i];
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}