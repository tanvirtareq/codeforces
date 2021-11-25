#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    // set<pair<ll, ll> > st;
    vector<pair<ll, ll> > v;
    for(int i=0;i<n;i++)
    {
        ll x, y;
        cin>>x>>y;
        // st.insert({y, x});
        v.push_back({y, x});
    }
    sort(v.begin(), v.end());
    ll tt[v.size()+1];
    tt[v.size()]=0;
    for(int i=n-1;i>=0;i--)
    {
        tt[i]=v[i].second+tt[i+1];
    }
    ll ct=0;
    ll pos=0;
    ll cst=0;   
    while(pos<v.size()){
        // cout<<pos<<endl;
        ll x=v[pos].first;
        if(x<=ct)
        {
            cst+=v[pos].second;
            ct+=v[pos].second;
            pos++;
        }
        else
        {
            while(v.size() and v.back().second+ct<=x)
            {
                cst+=2*v.back().second;
                ct+=v.back().second;
                v.pop_back();
            }
            if(v.size()==0) break;
            ll nibo=x-ct;
            cst+=2*nibo;
            ct+=nibo;
            // v.back().second-=nibo;
            ll tx=v.back().second-nibo;
            ll ty=v.back().first;
            v.pop_back();
            v.push_back({ty, tx});
            cst+=v[pos].second;
            ct+=v[pos].second;
            pos++;
        }
    }
    cout<<cst<<endl;

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