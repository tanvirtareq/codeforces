/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-17 20:48:39 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-17 21:37:51
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll curt=0, curx=0;
    pair<ll, pair<ll, ll> > pr={-1, {-1, -1}};
    vector<ll> a(n+1), b(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    a[n]=LLONG_MAX;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll t, x;
        t=a[i], x=b[i];
        if(t>=curt)
        {
            pr={curx, {x, t}};
            // cout<<i<<endl;
            // cout<<curx<<" "<<x<<" "<<t<<endl;
            curt=abs(curx-x)+t;
            curx=x;
            
        }
        ll jar=1;
        if(pr.first>pr.second.first) jar=-1;
        ll jaito=1;
        if(pr.first>x) jaito=-1;
        if(jar!=jaito) continue;
        if(jar==1)
        {
            if(x<pr.first or x>pr.second.first) continue;
        }
        else
        {
            if(x>pr.first or x<pr.second.first) continue;
        }
        ll tm=abs(pr.first-x)+pr.second.second;
        if(tm>=t and tm<=a[i+1]) ans++;
        // cout<<i<<" "<<tm<<" "<<ans<<endl;
    }
    cout<<ans<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {

        solve();
    }
    return 0;
}