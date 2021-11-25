#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define nl '\n'

vector<ll> g[200100], dis;

ll c;

void dfs1(ll r, ll p)
{
    for(auto it:g[r])
    {
        if(it==p) continue;
        dfs1(it, r);
        dis[r]=min(dis[r], dis[it]+1);
    }
    return;
}

ll dfs2(ll r, ll p, ll cst)
{
    if(r!=p and g[r].size()==1)
    {
        return 1;
    }
    for(auto it:g[r])
    {
        if(it==p) continue;
        if(dis[it]>cst+1)
        {
            if(dfs2(it, r, cst+1)) return 1;
        }
        else c++;
    }
    return 0;
}

void solve()
{
    ll n, k;
    cin>>n>>k;
    c=0;
    dis.clear();
    dis.resize(n+10);
    for(int i=0;i<=n;i++)
    {
        g[i].clear();
        dis[i]=INT_MAX;
    }
    for(int i=0;i<k;i++)
    {
        ll x;
        cin>>x;
        dis[x]=0;
    }
    for(int i=1;i<n;i++)
    {
        ll u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs1(1, 1);
    if(dfs2(1, 1, 0))
    {
        cout<<-1<<endl;
    }
    else cout<<c<<endl;
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}