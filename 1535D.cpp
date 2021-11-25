#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> g[300000];

vector<ll> dp, par;
string s;

void rc(ll x)
{
    if (s[x - 1] == '0')
    {
        dp[x] = dp[g[x][1]];
    }
    else if(s[x-1]=='1')
    {
        dp[x] = dp[g[x][0]];
    }
    else
    {
        dp[x]=dp[g[x][1]]+dp[g[x][0]];
    }
    if (par[x] == 0)
        return;
    rc(par[x]);
    return;
}

void solve()
{
    ll k;
    cin >> k;
    cin >> s;
    ll n = s.size() + 1;
    dp.assign(n + 3, 1);
    par.assign(n + 3, 0);
    queue<ll> qu;
    qu.push(n - 1);
    ll lst = n - 1;
    while (qu.size())
    {
        ll x = qu.front();
        qu.pop();
        if (lst <= 1)
            break;
        lst--;
        g[x].push_back(lst);
        par[lst] = x;
        qu.push(lst);
        lst--;
        g[x].push_back(lst);
        par[lst] = x;
        qu.push(lst);
    }
    for (int i = 0; i < n; i++)
    {
        ll x=i+1;
        if (s[x - 1] == '0')
        {
            if (g[x].size())
                dp[x] = dp[g[x][1]];
            else dp[x]=1;
        }
        else if (s[x - 1] == '1')
        {
            if (g[x].size())
                dp[x] = dp[g[x][0]];
            else dp[x]=1;
        }
        else
        {
            if(g[x].size())
            {
                 dp[x] = dp[g[x][1]]+dp[g[x][0]];
            }
            else dp[x]=2;
        }
        if(par[x]!=0)
        rc(par[x]);
        
        // if (s[i] != '?')
        //     continue;
        // ll chld = i + 1;
        // ll p = par[chld];
        // dp[chld]++;
        // if (p == 0)
        //     continue;
        // if (s[p - 1] == '1' and g[p][0] == chld)
        // {
        //     dp[p]++;
        // }
        // else if (s[p - 1] == '0' and g[p][1] == chld)
        // {
        //     dp[p]++;
        // }
    }
    // for (int i = 1; i < n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    // cout << endl;
    ll q;
    cin >> q;

    // cout<<q<<endl;
    while (q--)
    {
        ll x;
        char c;
       
        cin >> x >> c;
        //  cout<<x<<' '<<c<<endl;
        s[x - 1] = c;
        // cout<<c<<endl;
        if (s[x - 1] == '0')
        {
            if (g[x].size())
                dp[x] = dp[g[x][1]];
            else dp[x]=1;
        }
        else if (s[x - 1] == '1')
        {
            if (g[x].size())
                dp[x] = dp[g[x][0]];
            else dp[x]=1;
        }
        else
        {
            if(g[x].size())
            {
                 dp[x] = dp[g[x][1]]+dp[g[x][0]];
            }
            else dp[x]=2;
        }
        if(par[x]!=0)
        rc(par[x]);
        // for (int i = 1; i < n; i++)
        // {
        //     cout << dp[i] << " ";
        // }
        // cout << endl;
        cout << dp[n - 1] << endl;
    }
    return;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
