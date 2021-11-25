#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(), v.end());
    map<ll, ll> mp;
    for(auto it:v) mp[it]++;
    ll mn=LLONG_MAX;
    for(int i=1;i<n;i++)
    {
        mn=min(mn, v[i]-v[i-1]);
        if(v[i]==v[i-1])
        {
            // cout<<v[i]<<" ";
            for(int j=0;j<n-1;j++)
            {
                // if(j==i or j==i-1) continue;
                cout<<v[(j+i)%n]<<" ";
            }
            cout<<v[i]<<endl;
            return;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1]==mn)
        {
            // cout<<v[i-1]<<" ";
            for(int j=0;j<n;j++)
            {
                // if(j==i or j==i-1) continue;
                if((i-1+j)%n==i) continue;
                cout<<v[(i-1+j)%n]<<" ";
            }
            cout<<v[i]<<endl;
            return;
        }
    }
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