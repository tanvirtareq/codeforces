#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Header files, namespaces,
// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>


void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll, ll> > v;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    ll ct=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i].first*v[j].first>=10*n) break;
            if(v[i].first*v[j].first==v[i].second+v[j].second)
            {
                ct++;
                // cout<<v[i].second<<" "<<v[j].second<<endl;
            } 
        }
    }
    cout<<ct<<endl;
}

int main()
{

    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}