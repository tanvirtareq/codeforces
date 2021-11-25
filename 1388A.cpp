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
    if(n<=30)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        ll x=n-30;
        if(x!=6 and x!=10 and x!=14)
        {
            cout<<"6 10 14 "<<x<<endl;
        }
        else
        {
            cout<<"6 10 15 "<<x-1<<endl;
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
