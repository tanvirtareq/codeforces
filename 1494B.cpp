/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 02:12:44 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 02:41:16
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ck(ll n, ll tp, ll u,ll r,ll d,ll l)
{
    if(tp&(1<<0))
    {
        u--;
        r--;
    }
    if(tp&(1<<1))
    {
        r--;
        d--;
    }
    if(tp&(1<<2))
    {
        d--;
        l--;
    }
    if(tp&(1<<3))
    {
        l--;
        u--;
    }
    if(n==2 and u+r+l+d!=0) return 0;
    // cout<<tp<<" "<<l<<endl;
    if(u<0 or u>=n-1 or r<0 or r>=n-1 or l<0 or l>=n-1 or d<0 or d>=n-1) return 0;
    return 1;
}

void solve()
{
    ll n, u, r, l, d;
    cin>>n>>u>>r>>d>>l;
    for(ll i=0;i<(1LL<<4);i++)
    {
        if(ck(n, i, u, r, d, l))
        {
            // cout<<i<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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