/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-30 12:10:41 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-30 12:47:54
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, p;
    cin>>n>>m>>p;
    ll a[n], b[m];
    ll x=-1, y=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(x==-1 and a[i]%p!=0)
        {
            x=i;
        }
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
        if(y==-1 and b[j]%p!=0)
        {
            y=j;
        }
    }
    cout<<x+y<<'\n';

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}