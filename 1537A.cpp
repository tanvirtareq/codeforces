#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll s=0;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        s+=x;
    }
    s-=n;
    if(s>=0) cout<<s<<endl;
    else cout<<1<<endl;
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