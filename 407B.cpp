#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define MX 1010
#define md 1000000007
using namespace std;

ll ar[MX][MX], f1[MX][MX], f2[MX][MX], b1[MX][MX], b2[MX][MX];
ll s[2000], e[2000];
int main()
{
    fast;
    ll n;
    cin>>n;
    vector<ll> p(n+10);
    for(int i=1;i<=n;i++) cin>>p[i];

    s[1]=1;
    e[1]=2;
    for(int i=2;i<=n;i++)
    {
        s[i]=(e[i-1]+1)%md;
        ll x=(s[i]-s[p[i]]+md)%md;
//        cout<<x<<endl;
        x=(x+md)%md;
        e[i]=(s[i]+x+1)%md;

//        cout<<s[i]<<" "<<e[i]<<endl;
    }
    cout<<e[n]<<endl;

    return 0;
}




