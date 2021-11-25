#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    n=n*2;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    vector<ll> b[2];
    for(int i=0;i<n/2;i++)
    {
        b[0].push_back(a[i]);
    }
    for(int i=n/2;i<n;i++)
    {
        b[1].push_back(a[i]);
    }
    // reverse(b[1].begin(), b[1].end());
    for(int i=0;i<n;i++)
    {
        cout<<b[i%2].back()<<" ";
        b[i%2].pop_back();
    }
    cout<<endl;
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