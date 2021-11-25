#include <bits/stdc++.h>
#define ll int
using namespace std;
ll fnd(ll n)
{
    for(ll i=1;i<=n;i+=2)
    {
        if(i+1>n) return n;
        cout<<"? 2 "<<i<<" "<<i+1<<" 1"<<endl;
        ll y;
        cin>>y;
        if(y==1) return i;
        if(y==2)
        {
            cout<<"? 2 "<<i+1<<" "<<i<<" 1"<<endl;
            cin>>y;
            if(y==1) return i+1;
            if(y==-1) exit(0);
        }
    }
    exit(0);
}
void solve()
{
    ll n;
    cin>>n;
    ll pos=fnd(n);
    vector<ll> v(n+1);
    v[pos]=1;
    for(int i=1;i<=n;i++)
    {
        if(i==pos) continue;
        cout<<"? 1 "<<pos<<" "<<i<<" "<<n-1<<endl;
        ll y;
        cin>>y;
        if(y==-1) exit(0);
        v[i]=y;
    }
    cout<<"! ";
    for(int i=1;i<=n;i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t = 1;
    cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        // printf("Case #%d: ", cs);
        solve();
    }
    return 0;
}