
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{   
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[0]) ans++;
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        
        solve();
    }
    return 0;
}