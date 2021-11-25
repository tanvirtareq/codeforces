#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, x;
    cin>>n>>m>>x;
    vector<ll> tw(m), ans(n);
    vector<pair<ll, ll> > v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    priority_queue<pair<ll, ll> > pq;
    for(int i=0;i<m;i++)
    {
        pq.push({0, i});
    }
    for(int i=0;i<n;i++)
    {
        ll pos=pq.top().second;
        pq.pop();
        ans[v[i].second]=pos;
        tw[pos]+=v[i].first;
        pq.push({-tw[pos], pos});
    }
    ll mn=tw[0];
    ll mx=tw[0];
    for(int i=1;i<m;i++)
    {
        mn=min(mn, tw[i]);
        mx=max(mx, tw[i]);
    }
    if(mx-mn>x or pq.size() and pq.top().first==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(auto it:ans) cout<<it+1<<" ";
    cout<<endl;
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