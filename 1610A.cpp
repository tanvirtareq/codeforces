#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
// #define md 998244353LL

void solve()
{
    ll x, y;
    cin>>x>>y;
    if(x==1 and y==1)
    {
        cout<<0<<endl;
        return;
    }
    ll an=min(x, y);
    an=min(an, 2LL);
    cout<<an<<endl; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}