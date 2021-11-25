#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cerr<<#a<<"="<<a<<endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353
#define MX 200010

using namespace std;

int solve()
{

    ll l, r, m;
    cin>>l>>r>>m;
    ll x=m+(r-l);
    for(ll y=l;y<=r;y++)
    {
        ll rm=x%y;
        if(r-rm>=l)
        {
            cout<<y<<" "<<l<<" "<<r-rm<<endl;
            return 0;
        }
    }

    x=m-(r-l);
    for(ll y=l;y<=r;y++)
    {
        ll rm=x%y;
        rm=y-rm;
        if(l+rm<=r)
        {
            cout<<y<<" "<<r<<" "<<l+rm<<endl;
            return 0;
        }
    }

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



