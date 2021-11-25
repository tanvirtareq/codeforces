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
    vl v;
    vl mp(n+10);

    for(int i=0;i<2*n;i++)
    {
        ll x;
        cin>>x;
        if(mp[x]==0)
        {
            v.push_back(x);
        }
        mp[x]=1;
    }
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
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














