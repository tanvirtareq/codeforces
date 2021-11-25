#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    if(is_sorted(v.begin(), v.end()))
    {
        cout<<0<<endl;
        return;
    }
    if(v[0]==1 or v.back()==n)
    {
        cout<<1<<endl;
        return;
    }
    if(v[0]==n and v.back()==1)
    {
        cout<<3<<endl;
        return;
    }
    cout<<2<<endl;
    return;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // printf("Case #%d: ", cs);
        solve();
    }
    return 0;
}