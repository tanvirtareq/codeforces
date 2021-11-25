/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 05:19:08 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 06:04:54
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    ll lst0=0;
    map<ll,ll> mp;
    ll ans=0;
    ll x=0;
    mp[0]=1;
    ll lstm=0;
    for(int i=1;i<=n;i++)
    {
        x+=a[i];
        if(a[i]==0)
        {
            lst0=i;
            continue;
        }
        ll mx=max(lst0, mp[x]);
        mx=max(mx, lstm);
        ans+=(i-mx);
        mp[x]=i+1;
        lstm=mx;
        // cout<<i<<" ";
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}