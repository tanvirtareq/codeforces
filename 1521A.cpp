#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a, b;
    cin>>a>>b;
    ll x=1;
    ll y=b-x;
    ll z=a*b;
    if(x==y)
    {
        y=2*b-x;
        z=2*a*b;
    }
    if((x)%b!=0 and (y)%b!=0)
    {
        cout<<"YES"<<endl;
        cout<<x*a<<" "<<y*a<<" "<<z<<endl;
        return;
    }
    else cout<<"NO"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        // printf("Case #%d: ", cs);
        solve();
    }
    return 0;
}