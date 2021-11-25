#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<" "<<a<<endl
#define ii pair<int, int>

using namespace std;

void solve()
{
    ll n, m;
    cin>>n>>m;
    map<ll, ll> mp;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        mp[x]=1;
    }
    ll ans =0, f=0;
    for(int i=1;i<=m;i++)
    {
        ll x;
        cin>>x;
        if(mp[x]==1)
        {
            f=1;
            ans=x;
        }
    }
    if(f==1)
    {
        cout<<"YES\n1 "<<ans<<endl;
    }
    else cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    cin>>t;
    while(t--)
        solve();

    return 0;
}





