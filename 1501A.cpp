#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll qpow(ll b , ll p, ll md)
{
    if(p==0) return 1;
    ll x=(qpow(b, p/2, md))%md;
    x=(x*x)%md;
    if(p&1) x=(x*b)%md;
    return x;
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n+1), b(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    vector<ll> tm(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>tm[i];
    }
    ll as=0, re=0;
    for(int i=1;i<=n;i++)
    {
        ll lg=a[i]-b[i-1]+tm[i];
        as=re+lg;
        as=max(as, a[i]);
        lg=(b[i]-a[i]+1)/2;
        re=max(b[i], as+lg);
        // cout<<as<<" "<<re<<endl;
    }
    cout<<as<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {

        solve();
    }
    return 0;
}