#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    n--, m--;
    ll x=n+(n+1)*m;
    if(x==k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;
}