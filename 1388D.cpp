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

ll n;
vl g[300010], val, temp, visited, ans;

void dfs(int v) {
    visited[v] = true;
    for (int u : g[v]) {
        if (!visited[u])
            dfs(u);
    }
    ans.push_back(v);
}

void topological_sort() {
    visited.assign(n, false);
    ans.clear();
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());
}

int solve()
{
    cin>>n;
    val.clear();
    temp.clear();
    val.resize(n);
    temp.resize(n);
    // dbg(n);

    for(int i=1;i<=n;i++) g[i].clear();

    for(auto &it:val) cin>>it;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        temp[i]=x-1;
        if(x!=-1)
        {
            g[i].push_back(x-1);
        }
    }

    topological_sort();
    vl hah;
    vl rt;
    ll ct=0;
    for(int i=0;i<ans.size();i++)
    {
        ll id=ans[i];
        // dbg(id);
        if(val[id]<0)
        {
            hah.push_back(id);
        }
        else
        {
            ct+=val[id];
            if(temp[id]>=0)
                val[temp[id]]+=val[id];
            rt.push_back(id);
        }
        
    }
    reverse(hah.begin(), hah.end());
    for(int i=0;i<hah.size();i++)
    {
        ll id=hah[i];
        ct+=val[id];
        rt.push_back(id);
    }

    cout<<ct<<endl;
    for(auto it:rt) cout<<it+1<<" ";
    cout<<endl;


    return 0;
}

int main()
{
    fast;
    // int t;
    // cin>>t;
    // while(t--)
        solve();

    return 0;
}
