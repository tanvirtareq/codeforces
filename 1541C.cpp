#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Header files, namespaces,
// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

vector<ll> g[200000];
vector<ll> vl;
void solve()
{
    ll n;
    cin>>n;
    set<ll> st;
    ll x;
    cin>>x;
    // ll mn=LLONG_MAX;
    ll ct=0;
    vector<ll> v;
    for(int i=1;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        // ct-=x;
        // st.insert(x);
        // if(x>=mn) ct+=x;
        // mn=min(mn, x);
    }
    if(v.size())
    {
        sort(v.begin(), v.end());
        vector<ll> dp(n);
        dp[0]=v[0];
        for(int i=1;i<v.size();i++)
        {
            dp[i]=v[i]-v[i-1];
        }
        ll nn=v.size();
        for(int i=0;i<nn;i++)
        {
            // cout<<dp[i]<<endl;
            ct-=dp[i]*(nn-i)*(i+1);
            ct+=dp[i];
            // cout<<ct<<endl;
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