/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 06:32:33 
 * @Last Modified by:   tanvir tareq 
 * @Last Modified time: 2021-05-21 06:32:33 
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll tag[51], s[51], dp[51][51], vis[51][51];

struct cstm{
    ll a, b, c, d;
    cstm(){}
    cstm(ll aa, ll bb, ll cc, ll dd)
    {
        a=aa;
        b=bb;
        c=cc;
        d=dd;
    }
    bool operator < (cstm p) const
    {
        if(a==p.a) return b>p.b;
        return a<p.a;
    }

};

vector<cstm> g[5001];

ll cs;

ll dfs(ll r, pair<ll, ll> pr)
{
    ll idx=(upper_bound(g[r].begin(), g[r].end(), cstm(pr.first, pr.second, 0, 0) )-g[r].begin());
    if(idx>=g[r].size()) return 0;
    if(vis[r][idx]==cs) return dp[r][idx];
    vis[r][idx]=cs;
    ll &rt=dp[r][idx];
    rt=0;
    for(int i=idx;i<g[r].size();i++)
    {
        rt=max(rt, g[r][i].d+dfs(g[r][i].c, {g[r][i].a, g[r][i].b}));
    }
    return rt;
}

void solve()
{
    ll n;
    cin>>n;
    cs++;
    for(int i=0;i<=n;i++) g[i].clear();
    for(int i=1;i<=n;i++) cin>>tag[i];
    for(int i=1;i<=n;i++) cin>>s[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(tag[i]==tag[j]) continue;
            g[i].push_back( cstm(j, i, j, abs(s[j] - s[i] ) ) ) ;
            g[j].push_back( cstm(j, i, i, abs(s[j] - s[i] ) ) ) ;
        }
    }
    for(int i=1;i<=n;i++)
    {
        sort(g[i].begin(), g[i].end());
    }
    ll mx=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<g[i].size();j++)
        {
            mx=max(mx, g[i][j].d +dfs(g[i][j].c, make_pair(g[i][j].a, g[i][j].b) ) );
        }
    }
    cout<<mx<<endl;

}

void solve2()
{
    ll n;
    cin>>n;
    ll tg[n+1], s[n+1];
    ll dp[n+1];
    memset(dp, 0, sizeof(dp));
    for(int i=1;i<=n;i++) cin>>tg[i];
    for(int i=1;i<=n;i++) cin>>s[i];
    ll mx=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i-1;j>=1;j--)
        {
            if(tg[i]==tg[j]) continue;
            ll x=dp[i];
            ll y=dp[j];
            dp[i]=max(dp[i], y+abs(s[i]-s[j]));
            dp[j]=max(dp[j], x+abs(s[i]-s[j]));
            mx=max(mx, max(dp[i], dp[j]));
        }
    }
    // mx=*max_element(dp+1, dp+n+1);
    cout<<mx<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve2();
    }
    return 0;
}