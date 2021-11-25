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
    ll c2, c3;
    c2=c3=0;
    while(n%2==0)
    {
        c2++;
        n=n/2;
    }
    while(n%3==0)
    {
        c3++;
        n=n/3;
    }
    if(n!=1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(c2>c3)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll x=c2;
    c3-=c2;
    x+=2*c3;
    cout<<x<<endl;

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














