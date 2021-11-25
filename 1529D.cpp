#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n;
    cin>>n;
    ll md =998244353 ;
    ll dp[n+10];
    
    ll a[n+10];
    memset(a, 0, sizeof(a));
    for(ll i=1;i<=n;i++)
    {
        for(ll j=i;j<=n;j+=i)
        {
            a[j]++;
        }
    }
    ll x=0;
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        // cout<<i<<" "<<a[i]<<" "<<dp[i-1]<<" "<<x<<endl;
        a[i]=(a[i]+dp[i-1])%md;
        dp[i]=(a[i]+x)%md;
        x+=dp[i-1];
        // cout<<dp[i]<<endl;
    }
    cout<<dp[n]<<endl;
    return 0;
}