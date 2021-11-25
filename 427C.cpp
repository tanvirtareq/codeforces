#include<bits/stdc++.h>
#define MX 100010
#define dbg(a) cout<<#a<<"="<<a<<endl
#define md 1000000007
#define ll long long
using namespace std;

vector<bool> used;
vector<ll> g[MX], gr[MX], order, component;
vector<vector<ll> > an;
void dfs1(ll v)
{
    used[v]=1;
    for(ll i=0;i<g[v].size();++i)
    {
        if(!used[g[v][i]]) dfs1(g[v][i]);
    }
    order.push_back(v);
    return;
}
void dfs2(ll v)
{
    used[v]=1;
    component.push_back(v);
    for(auto it:gr[v])
        if(!used[it]) dfs2(it);
    return;
}
int main()
{
    ll n;
    cin>>n;
    vector<ll> p(n);
    for(auto &it:p) cin>>it;
    ll m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int x, y;
        cin>>x>>y;
        x--, y--;
        g[x].push_back(y);
        gr[y].push_back(x);
    }
    used.assign(n+10, false);
    for(int i=0;i<n;i++)
    {
        if(!used[i]){
            dfs1(i);
        }
    }
    used.assign(n+10, false);
    for(ll i=n-1;i>=0;--i)
    {
        int v=order[i];
        if(!used[v]) dfs2(v);
        if(component.size())
            an.push_back(component);
        component.clear();
    }
    ll a1=0, a2=1;
    for(auto it:an)
    {
        ll mn=p[it[0]];
        for(auto bt:it) mn=min(mn, p[bt]);
        ll ct=0;
        a1=(a1+mn);
        for(auto bt:it) ct+=(mn==p[bt]);
        a2=(a2*ct)%md;
    }
    cout<<a1<<" "<<a2<<endl;
    return 0;
}

