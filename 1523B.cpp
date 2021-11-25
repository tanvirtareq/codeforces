#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,pair<ll ,ll> > > v;
    for(int i=1;i<=n;i+=2)
    {
        ll x, y;
        cin>>x>>y;
        v.push_back({1, {i, i+1}});
        v.push_back({2, {i, i+1}});
        v.push_back({1, {i, i+1}});
        v.push_back({1, {i, i+1}});
        v.push_back({2, {i, i+1}});
        v.push_back({1, {i, i+1}});
    }
    cout<<v.size()<<endl;
    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }
    return;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}