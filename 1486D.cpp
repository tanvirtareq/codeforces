/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-27 06:11:41 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-27 06:33:28
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
vector<ll> v;

ll ck(ll m)
{
    ll mn=INT_MAX;
    vector<ll> dp(n);
    dp[0]=1;
    if(v[0]<m)
        dp[0]=-1;
    // if(k==1) mn=v[0];
    if(k==1 and v[0]>=m) return 1;
    for(int i=1;i<n;i++)
    {
        dp[i]=dp[i-1]+1;
        if(v[i]<m) dp[i]-=2;
        if(k==1 and v[i]>=m) return 1;
        if(i-k>=0) mn=min(mn,dp[i-k]);
        if(dp[i]>mn or i+1>=k and dp[i]>0) return 1;
    }
    return 0;
}

void solve()
{
    cin>>n>>k;
    v.assign(n, 0);
    for(auto &it:v) cin>>it;
    vector<ll> tmp=v;
    // sort(v.begin(), v.end());
    ll l=0, r=200000;
    ll ans=0;
    // cout<<ck()<<endl;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(ck(m))
        {
            ans=m;
            l=m+1;
        }
        else r=m-1;
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}