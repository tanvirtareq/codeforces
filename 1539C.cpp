#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, x;
    cin>>n>>k>>x;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end());
    vector<pair<ll, pair<ll, ll> > > vv;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1]>x)
        {
            ll t=v[i]-v[i-1]-1;
            // cout<<i<<" "<<t<<" "<<x<<endl;
            vv.push_back({(t)/x, { v[i], v[i-1] }});
        }
    }
    // cout<<vv.size()<<endl;
    sort(vv.begin(), vv.end());
    reverse(vv.begin(), vv.end());
    while(k and vv.size())
    {
        // cout<<k<<" "<<vv.back().first<<endl;
        if(vv.back().first>k) break;
        k-=vv.back().first;
        vv.pop_back();
    }
    cout<<vv.size()+1<<endl;


}

int main()
{

    int t = 1;
    // cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}