#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;

int solve()
{
    ll n, k;
    cin>>n>>k;
    map<ll, ll> mp;
    ll mx=0;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(x%k==0) continue;
        ll baki=k*(x/k+1)-x;
        mp[baki]++;
        mx=max(mx, baki+(mp[baki]-1)*k+1);
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
















