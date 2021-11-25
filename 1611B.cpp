#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define nl '\n'

void solve()
{
    ll a, b;
    cin>>a>>b;
    ll gese=abs(a-b)/2;
    if(gese>=min(a, b))
    {
        cout<<min(a, b)<<endl;
        return;
    }
    ll mn=min(a, b)-gese;
    mn/=2;

    cout<<gese+mn<<endl;
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