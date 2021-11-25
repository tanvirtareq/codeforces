#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v[n+1], u(n), s(n);
    ll sm=0;
    for(auto &it:u) cin>>it;
    for(auto &it:s) cin>>it;
    for(int i=0;i<n;i++)
    {
        sm+=s[i];
        v[u[i]].push_back(s[i]);
    }
    for(int i=0;i<=n;i++)
    {
        if(v[i].size())
        {
            sort(v[i].begin(), v[i].end());
            // reverse(v[i].begin(), v[i].end());
        } 
    }
    vector<ll> dp[n+1];
    
    set<ll> st;
    for(int i=0;i<=n;i++)
    {
        if(v[i].size()==0) continue;
        dp[i].push_back(v[i][0]);
        for(int j=1;j<v[i].size();j++)
        {
            dp[i].push_back(dp[i].back()+v[i][j]);
        }
        // cout<<i<<endl;
        st.insert(i);
    }
    ll perm=0;
    for(int i=1;i<=n;i++)
    {
        ll baki=0;
        vector<ll> dlt;
        for(auto it:st)
        {
            // cout<<it<<endl;
            // cout<<dp[it].size()<<endl;
            if(dp[it].size()<i)
            {
                perm+=dp[it].back();
                dlt.push_back(it);
                continue;
            }
            ll x=dp[it].size()%i;
            x--;
            if(x>=0) baki+=dp[it][x];
        }
        // cout<<"a;lsd"<<perm<<endl;
        for(auto it:dlt) st.erase(it);
        ll as=sm-baki-perm;
        cout<<as<<" ";
    }

    cout<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;
}