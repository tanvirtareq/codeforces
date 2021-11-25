/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-19 14:02:26 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-19 14:42:18
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll brt(ll c, ll d, ll x)
{
    vector<pair<ll,ll> > v;
    for(ll i=1;i<=100;i++)
    {
        for(ll j=1;j<=100;j++)
        {
            if(c*i*j/__gcd(i, j)-d*__gcd(i, j)==x)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

ll dp[20001000];

void solve()
{   
    ll c, d, x;
    cin>>c>>d>>x;
    // brt(c, d, x);
    ll ans=0;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i) continue;
        ll x1=i+d;
        if(x1%c==0)
        {
            
            // cout<<x1<<endl;
            x1/=c;
            ans+=dp[x1];
        }
        if(i*i==x) break;
        x1=x/i+d;
        if(x1%c==0)
        {
            
            // cout<<x1<<endl;
            x1/=c;
            ans+=dp[x1];
        }
    }
    cout<<ans<<endl;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(ll i=1;i<=20000000;i++) dp[i]=1;
    for(int i=2;i<=20000000;i++)
    {
        if(dp[i]!=1) continue;
        for(ll j=i;j<=20000000;j+=i)
        {
            dp[j]*=2;
        }
    }
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        
        solve();
    }
    return 0;
}