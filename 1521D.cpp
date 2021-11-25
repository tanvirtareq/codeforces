/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-19 10:00:07 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-19 11:08:02
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;

vector<ll> g[200010], dp[2], s[2][200100];

void dfs(ll r, ll p)
{
    vector<pair<pair<ll, ll> , pair<ll, ll> > > v;
    ll tt=0;
    for(auto it:g[r])
    {
        if(it==p) continue;
        dfs(it, r);
        v.push_back({{dp[1][it]-dp[0][it], it}, {dp[0][it], dp[1][it]}});
        tt+=dp[0][it];
    }
    sort(v.begin(), v.end());
    if(r!=1)
        dp[0][r]=1;
    // cout<<r<<" "<<dp[0][r]<<" "<<dp[1][r]<<endl;
    if(v.size())
    {
        dp[1][r]+=tt+v[0].first.first;
        s[1][r].push_back(v[0].first.second);
        dp[0][r]+=tt+v[0].first.first;
        s[0][r].push_back(v[0].first.second);
        // cout<<r<<" "<<dp[0][r]<<" "<<dp[1][r]<<endl;
    }
    if(v.size()>1)
    {
        dp[0][r]+=v[1].first.first;
        s[0][r].push_back(v[1].first.second);
    }
    // cout<<r<<" "<<dp[0][r]<<" "<<dp[1][r]<<endl;
    return;

}

set<pair<ll,ll> > st;

void dfs(ll r, ll p, bool dltpar)
{
    if(r!=1 and dltpar)
    {
        st.insert({p, r});
    }
    map<int, int> mp;
    for(auto it:s[!dltpar][r])
    {
        mp[it]=1;
        dfs(it, r, 0);
    }
    for(auto it:g[r])
    {
        if(it==p or mp[it]) continue;
        dfs(it, r, 1);
    }
    return;
}
vector<ll> bmb[200100];

void build(ll r, ll p)
{
    for(auto it:g[r])
    {
        if(it==p) continue;
        if(st.find({r, it})==st.end())
        {
            bmb[r].push_back(it);
            bmb[it].push_back(r);
        }
        build(it, r);
    }
    return;
}

vector<ll> vis, bamb[200100];

void bamboo(ll r, ll p, ll tp)
{
    bamb[tp].push_back(r);
    vis[r]=1;
    for(auto it:bmb[r])
    {
        if(it==p) continue;
        bamboo(it, r, tp);
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vis.clear();
        vis.assign(n+4, 0);
        dp[0].clear();
        st.clear();
        dp[1].clear();
        dp[0].assign(n+4, 0);
        dp[1].assign(n+4, 0);
        for(int i=0;i<=n;i++)
        {
            g[i].clear();
            bmb[i].clear();
            bamb[i].clear();
            s[0][i].clear();
            s[1][i].clear();
        }
        for(int i=1;i<n;i++)
        {
            ll x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1, 1);
        // cout<<dp[1][1]<<endl;
        dfs(1, 1, 1);
        build(1, 1);
        ll ct=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==1 or bmb[i].size()>1) continue;
            ct++;
            bamboo(i, i, ct);
        }
        vector<pair<ll, ll> > vvv;
        for(int i=2;i<=ct;i++)
        {
            vvv.push_back({bamb[i-1].back(), bamb[i][0]});
        }
        ll x=0;
        cout<<vvv.size()<<endl;
        for(auto it:st)
        {
            cout<<it.first<<" "<<it.second<<" "<<vvv[x].first<<" "<<vvv[x].second<<endl;
            x++;
        }
        // for(auto it:st) cout<<it.first<<" "<<it.second<<endl;
    }
}