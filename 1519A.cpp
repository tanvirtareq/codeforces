#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x, y, d;
    cin>>x>>y>>d;
    d++;
    if(x>y) swap(x, y);
    if(x*d>=y) cout<<"YES"<<endl;
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