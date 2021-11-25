#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll k;
    cin>>k;
    ll x=__gcd(100LL, k);
    cout<<100/x<<endl;
    return;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // printf("Case #%d: ", cs);
        solve();
    }
    return 0;
}