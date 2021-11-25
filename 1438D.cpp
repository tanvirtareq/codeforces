/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-28 06:13:23 
 * @Last Modified by:   tanvir tareq 
 * @Last Modified time: 2021-05-28 06:13:23 
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{   
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll x=v[0];
    vector<pair<ll , pair<ll, ll> > > an;
    for(int i=2;i<n;i+=2)
    {
        an.push_back({0, {i-1, i}});
        ll y=x^v[i-1]^v[i];
        x=y;
        v[i-1]=v[i]=y;
    }
    
    for(int i=2;i<n;i+=2)
    {
        ll y=v[i-1]^v[i]^x;
        an.push_back({0, {i-1, i}});
        v[i-1]=v[i]=x=y;
    }
    if(n%2==0 and x!=v.back())
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<an.size()<<endl;
    for(auto it:an) cout<<it.first+1<<" "<<it.second.first+1<<" "<<it.second.second+1<<endl;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        
        solve();
    }
    return 0;
}