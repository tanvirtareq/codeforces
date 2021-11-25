#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define inf 100000000000000
#define nl '\n'
using namespace std;


ll n, m, k;

ll koyta(ll x)
{
    ll ct=0;
    for(ll i=1;i<=n;i++)
    {
        ct+=min(x/i, m);
    }
    return ct;
}

int main()
{
    fast;
    cin>>n>>m>>k;
    ll l=1, r=n*m;
    while(l<r)
    {
        ll mid=r-(r-l)/2;
//        dbg(l);

        if(koyta(mid-1)<k)
        {
            l=mid;
        }
        else r=mid-1;
    }
    cout<<l<<nl;
    return 0;
}



