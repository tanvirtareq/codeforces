#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define nl '\n'
vector<vector<ll> > v;

ll ck(ll m)
{
    vector<ll> nb;
    for(int i=0;i<v.size();i++)
    {
        if(v[i][1]>=nb.size() and nb.size()+1+v[i][0]>=m)
        {
            nb.push_back(i);
        }
    }
    return nb.size()>=m;
}

void solve()
{
    int n;
    cin>>n;
    v.clear();
    for(int i=0;i<n;i++)
    {
        ll x, y;
        cin>>x>>y;
        v.push_back({x, y});
    }
    ll l=1, r=n;
    ll ans=l;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(ck(m))
        {
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}