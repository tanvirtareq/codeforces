/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 06:07:37 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 06:29:52
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> g[n+1];
    vector<ll> ans;
    ans.assign(n+1, -1);
    map<pair<ll, ll> , ll> mp;
    for(int i=1;i<n;i++)
    {
        ll x, y;
        cin>>x>>y;
        mp[{x, y}]=i;
        mp[{y, x}]=i;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if(n==2)
    {
        cout<<0<<endl;
        return;
    }
    ll tr=0;
    for(int i=1;i<=n;i++)
    {
        // cout<<i<<" "<<g[i].size()<<endl;
        if(g[i].size()==1)
        {
            ans[mp[{i, g[i][0]}]]=tr;
            // cout<<tr<<endl;
            // cout<<'a'<<endl;
            tr++;
            if(tr==3) break;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(ans[i]==-1) ans[i]=tr++;
        cout<<ans[i]<<endl;
    }

}

int main()
{
    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}