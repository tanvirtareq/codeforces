#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define md 1000000007

using namespace std;
int solve()
{
    ll n;
    cin>>n;
    ll x=1;
    ll y=1;
    for(ll i=1;i<n;i++)
    {
        x=(x*i)%md;
        y=(y*2)%md;
    }
    x=(x*n)%md;
    ll ans=(x-y+md)%md;
    cout<<ans<<endl;
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