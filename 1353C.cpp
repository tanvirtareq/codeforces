#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<"= "<<a<<endl
#define vl vector<ll>
#define pll pair<ll, ll>
#define fast ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=n/2;
        ll ans=0;
        for(ll i=1;i<=x;i++)
        {
            ans+=i*(i-1);
        }
//        dbg(ans);
        cout<<ans*8+4*(x+1)*(x)<<endl;

//        cout<<8*x*(x+1)*(2*x+1)/6+4*x*(x-1)/2<<endl;
    }


    return 0;
}


