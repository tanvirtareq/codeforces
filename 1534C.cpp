#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> g[500000], vis;

ll x;

#define md 1000000007LL

ll pwr(ll b, ll p)
{
    if(p==0) return 1;
    ll y=pwr(b, p/2);
    y=(y*y)%md;
    if(p&1)
    {
        y=(y*b)%md;
    }
    return y;
}

ll dfs(ll r, ll cnt)
{
    // cout<<r<<endl;
    if(vis[r]==1)
    {
        x=pwr(2, cnt);
        return 0;
    }
    vis[r]=1;
    for(auto it:g[r])
    {
        dfs(it, cnt+1);
    }
    return 0;
}

void solve()
{
    ll n;
    cin>>n;
    vis.clear();
    vis.assign(n+3, 0);
    for(int i=0;i<=n;i++) g[i].clear();
    ll a[n+4], b[n+4];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        g[a[i]].push_back(b[i]);
    }
    ll ct=1;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]) continue;
        dfs(i, 1);
        ct=(ct*2)%md;
        // ct=(ct+x)%md;
    }
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