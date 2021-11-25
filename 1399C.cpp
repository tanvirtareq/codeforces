#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define md 1000000007

using namespace std;

int solve()
{
    int n;
    cin>>n;
    map<ll, ll> mp;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }

    ll mx=0;
    for(ll i=1;i<=100;i++)
    {
        ll c=0;
        for(int j=1;j<=i/2;j++)
        {
            ll a=j;
            ll b=i-j;
            if(a!=b)
                c+=min(mp[a], mp[b]);
            else c+=mp[a]/2;
            // if(i==6)
            // {
            //     dbg(c);
            // }
        }
        // dbg(c);
        mx=max(mx, c);
    }
    cout<<mx<<endl;

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