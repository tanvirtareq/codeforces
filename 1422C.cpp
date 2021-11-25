/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-19 05:27:15 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-19 05:52:26
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll pw[n+3];
    ll md=1000000007LL;
    pw[0]=1;
    for(int i=1;i<=n;i++)
        pw[i]=(pw[i-1]*10)%md;
    ll ans=0;
    vector<ll> dp(n+3);
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0') continue;
        ll baki=n-i-1;
        ans=(ans+(((s[i]-'0')*pw[baki])%md)*((i*(i+1)/2)%md))%md;
        // cout<<ans<<endl;
        dp[0]+=(s[i]-'0');
        dp[baki]-=(s[i]-'0');
    }
    // cout<<ans<<endl;
    for(ll i=1;i<=n;i++)
    {
        dp[i]+=dp[i-1];
    }
    for(int i=0;i<n;i++)
    {
        ans=(ans+(((dp[i]*pw[i])%md)*(i+1))%md)%md;
    }
    cout<<ans<<endl;
    return 0;
}
