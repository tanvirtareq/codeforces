#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t[800000], lazy[800000];

void push(ll v)
{
    t[v * 2] += lazy[v];
    lazy[v * 2] += lazy[v];
    t[v * 2 + 1] += lazy[v];
    lazy[v * 2 + 1] += lazy[v];
    lazy[v] = 0;
}

void update(ll v, ll tl, ll tr, ll l, ll r, ll addend)
{
    if (l > r)
        return;
    if (l == tl && tr == r)
    {
        t[v] += addend;
        lazy[v] += addend;
    }
    else
    {
        push(v);
        ll tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), addend);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, addend);
        t[v] = min(t[v * 2], t[v * 2 + 1]);
    }
}

ll query(ll v, ll tl, ll tr, ll l, ll r)
{
    if (l > r)
        return INT_MAX;
    if (l <= tl && tr <= r)
        return t[v];
    push(v);
    ll tm = (tl + tr) / 2;
    return min(query(v * 2, tl, tm, l, min(r, tm)),
               query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}

void solve()
{

    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 0; i <= 4 * n; i++)
    {
        t[i] = 0;
        lazy[i] = 0;
    }
    ll x = 0;
    ll ct = 0;
    set<pair<ll, ll>> st;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] >= 0)
            x += a[i], ct++;
        update(1, 1, n, i, i, x);
        if (a[i] < 0)
        {
            st.insert({-a[i], -i});
        }
    }
    // for(ll i=1;i<=n;i++)
    // {
    //     cout<<query(1, 1, n, i, i)<<" ";
    // }
    // cout<<endl;
    while (st.size())
    {
        auto it = *st.begin();
        ll mn = query(1, 1, n, -it.second, n);
        // cout << it.first << " " << it.second << " " << mn << endl;
        if (mn < it.first)
        {
            st.erase(it);
            continue;
        }
        ct++;
        update(1, 1, n, -it.second, n, -it.first);
        st.erase(it);
        // for (ll i = 1; i <= n; i++)
        // {
        //     cout << query(1, 1, n, i, i) << " ";
        // }
        // cout << endl;
    }
    cout << ct << endl;

    return;
}

int main()
{
    ll t = 1;
    // cin>>t;
    for (ll cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}