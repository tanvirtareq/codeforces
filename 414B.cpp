#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define nl '\n'
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define inf 100000000000000
#define md 1000000007
using namespace std;

ll dpt[3000][3000];
ll n, k;
ll dpf(ll pos, ll tk)
{
    if(pos>k) return 1;
    ll &rt=dpt[pos][tk];
    if(rt!=-1) return rt;
    rt=0;
    for(ll i=1;i*tk<=n;i++)
    {
        rt=(rt+dpf(pos+1, i*tk))%md;
    }
    return rt;
}

int main()
{
    fast;
    memset(dpt, -1, sizeof dpt);
    cin>>n>>k;
    cout<<dpf(1, 1)<<nl;
    return 0;
}








