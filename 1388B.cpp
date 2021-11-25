#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<endl
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
    ll x=(n+3)/4;
    string v;
    for(int i=0;i<x;i++)
    {
        v.push_back('8');
    }
    for(int i=x;i<n;i++) v.push_back('9');
    reverse(v.begin(), v.end());
    cout<<v<<endl;
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
