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
    ll n;
    cin>>n;
    ll a[n+10];
    a[0]=0;
    a[n+1]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    ll id=n;
    for(int i=n;i>=0;i--)
    {
        if(a[i]>=a[i+1]) id=i;
        else break;
    }
    for(int i=id-1;i>=0;i--)
    {
        if(a[i]<=a[i+1]) id=i;
        else break;
    }
    cout<<max(0LL, id-1)<<endl;
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















