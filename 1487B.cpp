/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 03:28:19 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 03:47:31
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    if(n%2==0)
    {
        ll x=k%n;
        if(x==0) x=n;
        cout<<x<<endl;
        return;
    }
    ll x=(k+n-2)/(n-1);
    ll y=x%n;
    if(y==0) y=n;
    ll z=k%(n-1);
    if(z==0) z=n-1;
    if(z>(n-1)/2) z++;
    ll ans=(y+z-1)%n;
    if(ans==0) ans=n;
    cout<<ans<<endl;

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