/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-25 10:22:27 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-25 13:01:44
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> g[200100];
ll chld[200100], par[200100][25], d[200100];

void dfs(ll r, ll p)
{
    par[r][0] = p;
    chld[r] = 1;
    d[r] = d[p] + 1;
    for (auto it : g[r])
    {
        if (it == p)
            continue;
        dfs(it, r);
        chld[r] += chld[it];
    }
}

ll lca(ll a, ll b)
{
    ll x = 19;
    if (d[a] < d[b])
        swap(a, b);
    for (x = 19; x >= 0; x--)
    {
        if (d[par[a][x]] >= d[b])
        {
            a = par[a][x];
        }
    }
    // cout<<a<<" "<<b<<endl;
    if (a == b)
        return a;
    for (x = 19; x >= 0; x--)
    {
        if (par[a][x] != par[b][x])
        {
            a = par[a][x];
            b = par[b][x];
        }
    }
    return par[a][0];
}

void solve()
{
    ll n;
    cin >> n;
    d[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        g[i].clear();
        chld[i] = 0;
        d[i] = 0;
        for (int j = 0; j < 20; j++)
            par[i][j] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0, 0);
    // for(int i=0;i<n;i++) cout<<par[i][0]<<" ";
    // cout<<endl;
    ll x = 0;
    for (auto it : g[0])
    {
        // cout<<it<<endl;
        x += (chld[it] * (chld[it] - 1)) / 2;
    }
    cout << x << " ";
    // cout<<endl;
    for (int i = 1; i < 20; i++)
    {
        for (int j = 0; j < n; j++)
        {
            par[j][i] = par[par[j][i - 1]][i - 1];
        }
    }
    vector<ll> v;
    ll tt = 0;
    // ll xx=lca(2, 1);
    // cout<<xx<<endl;
    for (auto it : g[0])
    {
        if (lca(it, 1) == it)
        {
            ll x = chld[it] - chld[1];
            chld[0] -= chld[it];
            if (x > 0)
            {
                v.push_back(x);
                tt += x;
            }
        }
        else
        {
            v.push_back(chld[it]);
            tt += chld[it];
        }
        // cout<<tt<<endl;
        // tt+=v.back();
    }
    x = tt;
    for (int i = 0; i < v.size(); i++)
    {
        tt -= v[i];
        x += tt * v[i];
    }
    cout << x << " ";
    ll e0 = 0, e1 = 1;
    for (int i = 2; i <n; i++)
    {
        if(lca(i, e1)==i or lca(i, e0)==i)
        {
            cout<<0<<" ";
            continue;
        }
        else if (lca(i, e0) == e0 and lca(i, e1) == 0)
        {
            x = chld[e0] - chld[i];
            cout << (x) * (chld[e1]) << " ";
            e0 = i;
            continue;
        }
        else if (lca(i, e1) == e1 and lca(i, e0) == 0)
        {
            x = chld[e1] - chld[i];
            cout << (x) * (chld[e0]) << " ";
            e1 = i;
            continue;
        }
        else if (lca(i, e0) == e0 and lca(i, e1) == i)
        {
            cout << 0 << " ";
            // cout<<chld[e0]*chld[e1]<<" ";
            continue;
        }
        else if (lca(i, e1) == e1 and lca(i, e0) == i)
        {
            cout << "0 ";
            // cout<<chld[e0]*chld[e1]<<" ";
            continue;
        }
        else if(lca(i, e1)==i or lca(i, e0)==i)
        {
            cout<<0<<" ";
            continue;
        }
        else if (lca(i, e0) == e0 and lca(i, e1) == e1)
        {
            if (d[e0] > d[e1])
            {
                x = chld[e0] - chld[i];
                cout << (x) * (chld[e1]) << " ";
                e0 = i;
            }
            else
            {
                x = chld[e1] - chld[i];
                cout << (x) * (chld[e0]) << " ";
                e1 = i;
            }
            continue;
        }
        else
        {
            cout<<chld[e0]*chld[e1]<<" ";
            for (int j = i+1; j <= n; j++)
            {
                cout << "0 ";
            }
            cout << endl;
            return;
        }
    }
    cout << 1 << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}