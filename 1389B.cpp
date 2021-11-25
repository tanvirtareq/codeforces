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
    ll n, k, z;
    cin>>n>>k>>z;
    vl v(n);
    for(auto &it:v) cin>>it;
    vl dp(n);
    dp[0]=v[0];
    k++;
    for(int i=1;i<n;i++)
    {
        dp[i]=dp[i-1]+v[i];
    }
    ll mx=0;
    if(z==0)
    {
        cout<<dp[k-1]<<endl;
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        ll x=v[i]+v[i+1];
        if(i+1>=k-1)
        {
            mx=max(mx, dp[k-1]);
            // dbg(mx);
        }
        else
        {
            ll ses=i+1;
            // dbg(ses);
            ll nisi=dp[ses];
            // dbg(nisi);
            ll baki=(k-1-ses);
            nisi+=v[i];
            baki--;
            ll zbaki=z-1;
            // dbg(baki);
            // dbg(nisi);
            ll mn=min(baki/2, zbaki);
            // dbg(mn);
            nisi+=mn*x;
            ll arobaki=baki-mn*2;
            ll aronibo=min(ses-1+arobaki, n-1);
            nisi+=dp[aronibo]-dp[ses-1];
            ll sesbaki=ses-1+arobaki-aronibo;
            if(sesbaki==1) nisi+=v[n-2];
            else if(sesbaki>1)
            {
                nisi=0;
            }
            mx=max(mx, nisi);
            // dbg(mx);
        }
        
    }
    cout<<mx<<endl;

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
