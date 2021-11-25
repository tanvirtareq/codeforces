/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-25 09:25:23 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-25 10:14:37
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m;

void ck(vector<pair<ll,pair< char,ll> > > a, vector<ll> &ans)
{
    sort(a.begin(), a.end());
    // cout<<a.size()<<endl;
    deque<pair<ll,pair< char,ll> > > dq;
    for(int i=0;i<a.size();i++)
    {
        if(a[i].second.first=='R')
        {
            // cout<<i<<endl;
            dq.push_back(a[i]);
            continue;
        }
        else if(dq.size()==0)
        {
            dq.push_front({-a[i].first, {'R', a[i].second.second}});
            continue;
        }
        else
        {
            // cout<<"YE"<<endl;
            ll x=a[i].second.second;
            ll y=dq.back().second.second;
            // cout<<x<<" "<<y<<endl;
            ll z=abs(a[i].first-dq.back().first)/2;
            ans[x]=z;
            ans[y]=z;
            dq.pop_back();
            continue;
        }
    }
    while(dq.size()>1)
    {
        ll x=dq.back().second.second;
        ll xx=dq.back().first;
        dq.pop_back();
        ll y=dq.back().second.second;
        ll yy=dq.back().first;
        dq.pop_back();
        ll z=abs(m-xx)+abs(m-yy);
        z/=2;
        ans[y]=z;
        ans[x]=z;
    }
}

void solve()
{
    
    cin>>n>>m;
    ll v[n];
    for(int i=0;i<n;i++) cin>>v[i];
    vector<pair<ll,pair< char,ll> > > a[2];
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        a[v[i]%2].push_back({v[i],{ch, i}});
    }
    vector<ll> ans;
    ans.assign(n, -1);
    ck(a[0], ans);
    ck(a[1], ans);
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}