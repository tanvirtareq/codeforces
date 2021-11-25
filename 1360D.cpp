#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define inf 100000000000000
using namespace std;

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll ans=n;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ll x=i;
                ll y=n/i;
                if(x<=k)
                {
                    ans=min(ans, n/x);
                }
                if(y<=k)
                {
                    ans=min(ans, n/y);
                }
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}




