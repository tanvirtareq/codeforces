#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0, b=0;
    pair<ll, ll> pr[n];
    ll dp[n];
    map<pair<ll, ll> , ll> mp;
    for(int i=0;i<n;i++)
    {
        // cout<<i<<endl;
        if(s[i]=='D') a++;
        else b++;
        ll g=__gcd(a, b);
        // cout<<g<<" ";
        if(a==0 or b==0)
        {
            pr[i]={a, b};
            dp[i]=g;
            // mp[{a, b}]=g;
            // cout<<dp[i]<<" ";
        }
        else if(g==1)
        {
            // cout<<1<<" ";
            // mp[pr[i]]=max(mp[pr[i]], 1);
            
            pr[i]={a, b};
            mp[pr[i]]++;
            dp[i]=mp[pr[i]];
            // mp[{a, b}]=1;
        }
        else
        {
            // a/=g;
            // b/=g;
            ll aa=a/g;
            ll bb=b/g;
            ll xx=aa+bb;
            // dp[i]=1;
            // if(pr[i-xx]==make_pair(aa, bb)) dp[i]=1+dp[i-xx];
            // cout<<endl;
            // cout<<i<<" "<<xx<<endl;
            pr[i]={aa, bb};
            mp[pr[i]]++;
            dp[i]=mp[pr[i]];
            // cout<<dp[i]<<" ";
        }
    }
    for(int i=0;i<n;i++) cout<<dp[i]<<" ";
    cout<<endl;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}