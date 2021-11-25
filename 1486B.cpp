/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 03:51:23 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 03:59:24
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1], b[n+1], x[n+1], y[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        x[i]=a[i];
        y[i]=b[i];
    }
    sort(x+1, x+n+1);
    sort(y+1, y+n+1);
    ll l=1, r=1;
    if(n%2==0)
    {
        l=(x[n/2+1]-x[n/2]+1);
        r=(y[n/2+1]-y[n/2]+1);
    }
    cout<<l*r<<endl;
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