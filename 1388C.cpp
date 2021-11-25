#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;

ll n, m;
vl p, h, cal, ct;
vl g[100010];

ll dfs(int r,int pr)
{
    cal[r]=-p[r];
    ct[r]=p[r];
    for(auto it:g[r])
    {
        if(it==pr) continue;
        if(dfs(it, r)>0) return 1;
        cal[r]+=h[it];
        ct[r]+=ct[it];
    }
    if(cal[r]>h[r] or ct[r]<h[r] or (ct[r]+h[r])%2==1)
    {

        return 1;
    }
    return 0;
}

int solve()
{
    cin>>n>>m;
    p.clear();
    h.clear();
    cal.clear();
    cal.resize(n);
    ct.clear();
    ct.resize(n);
    p.resize(n);
    for(auto &it:p) cin>>it;
    h.resize(n);
    for(auto &it:h) cin>>it;
    for(int i=0;i<=n;i++) g[i].clear();
    for(int i=1;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        x--, y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if(dfs(0, 0)>0)
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;

    return 0;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
