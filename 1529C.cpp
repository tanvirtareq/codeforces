
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n;
ll a[2][200010], dp[2][200010];
vector<ll> g[200010];

ll dfs(ll r, ll p)
{
    dp[0][r]=dp[1][r]=0;
    for(auto v:g[r])
    {
        if(v==p) continue;
        dfs(v, r);
        dp[0][r]+=max(abs(a[0][r]-a[0][v])+dp[0][v], abs(a[0][r]-a[1][v])+dp[1][v]);
        dp[1][r]+=max(abs(a[1][r]-a[0][v])+dp[0][v], abs(a[1][r]-a[1][v])+dp[1][v]);
    }
    // cout<<r<<" "<<p<<endl;
    // cout<<dp[0][r]<<" "<<dp[1][r]<<endl;
    return 0;
}

void solve()
{   
    cin>>n;
    for(int i=0;i<=n;i++) g[i].clear();
    for(int i=1;i<=n;i++)
    {
        cin>>a[0][i]>>a[1][i];
    }
    for(int i=1;i<n;i++)
    {
        ll x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, 1);
    cout<<max(dp[0][1], dp[1][1])<<endl;

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