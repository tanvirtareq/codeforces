#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define szz 4010

using namespace std;

int main()
{
    ll p, q, l, r;
    cin>>p>>q>>l>>r;
    vector<pair<ll, ll> > a, b;
    for(int i=0;i<p;i++)
    {
        ll x, y;
        cin>>x>>y;
        a.push_back({x, y});
    }
    for(int i=0;i<q;i++)
    {
        ll x, y;
        cin>>x>>y;
        b.push_back({x, y});
    }
    vector<int> v(r+10);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            ll lr=a[i].first-b[j].second;
            ll rr=a[i].second-b[j].first;
            lr=max(lr, l);
            rr=min(rr, r);
            // cout<<lr<<" "<<rr<<endl;
            for(int k=lr;k<=rr;k++) v[k]=1;
        }
    }
    ll as=0;
    for(int i=l;i<=r;i++) as+=v[i];
    cout<<as<<endl;
    
    return 0;
}
