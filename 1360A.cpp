#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
using namespace std;

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        if(a>b) swap(a, b);
        ll x=max(2*a, b);
        cout<<x*x<<endl;
    }

    return 0;
}

