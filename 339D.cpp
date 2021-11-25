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
using namespace std;

const ll mx=1LL<<18;

ll tree[4*mx];

void up(int nd, int l, int r, int pos, int val, int tp)
{
    if(l==pos && r==pos)
    {
        tree[nd]=val;
        return;
    }
    int md=(l+r)/2;
    if(pos<=md)
    {
        up(2*nd, l, md, pos,  val, !tp);
    }
    else up(2*nd+1, md+1, r, pos, val, !tp);

    if(tp==0)
    {
        tree[nd]=tree[2*nd]^tree[2*nd+1];
    }
    else tree[nd]=tree[2*nd]|tree[2*nd+1];
    return;
}

int main()
{
    fast;
    ll n, m;
    cin>>n>>m;
    int xx=n%2;
    n=1LL<<n;
    for(int i=1;i<=n;i++)
    {
        ll x, b;
        cin>>x;
        up(1, 1, n, i, x, xx);
    }
    while(m--)
    {
        ll p, b;
        cin>>p>>b;
        up(1,1, n, p, b, xx);
        cout<<tree[1]<<nl;
    }


    return 0;
}






