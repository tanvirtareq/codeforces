#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define md 1000000007
#define inf 100000000000LL

using namespace std;

 vector<long long>  a, b;

int ck(ll m)
{
    for(auto it:a)
    {
        ll mx=inf;
        for(auto bt:b)
        {

            mx=min(mx, it&bt);
        }
        if(mx>inf) return 0;
    }
    return 1;
}

int solve()
{
    ll n,m;
    cin>>n>>m;
   a.assign(n, 0);
   b.assign(m, 0);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll mx=0;
    for(auto it:a)
    {
        ll c=inf;
        for(auto bt:b)
        {
            c=min(c, it&bt);
        }
        mx=max(mx, c);
    }

    ll an=mx;
    for(auto it:a)
    {
        ll c=inf;
        for(auto bt:b)
        {
            c=min(c, (it&bt)|an);
        }
        an|=c;
    }
    cout<<an<<endl;

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