#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll, ll> mp;
ll n;
set<pair<ll, ll> > v;

void solve()
{
    cin>>n;   
    set<ll> st;
    cout<<"? 1"<<endl;
    map<ll, vector<ll> > tmp;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(x>0)
        {
            tmp[x].push_back(i);
        }
    }
    ll d=1;
    ll ct=0;
    for(int i=1;i<=n;i+=2)
    {
        ct+=tmp[i].size();
    }
    if(ct>=n/2)
    {
        d=0;
    }
    for(int i=0;i<tmp[1].size();i++)
    {
        v.insert({1, tmp[1][i]});
    }
    for(int i=1;i<n;i++)
    {
        if(i%2!=d) continue;
        for(auto it:tmp[i])
        {
            cout<<"? "<<it<<endl;
            for(ll j=1;j<=n;j++)
            {
                ll x;
                cin>>x;
                if(x==1)
                {
                    v.insert({min(it, j), max(it, j)});
                }
            }
        }
    }
    cout<<"!"<<endl;
    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}