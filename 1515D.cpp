#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, l, r;
    cin>>n>>l>>r;
    map<ll, ll> ml, mr;
    for(int i=0;i<l;i++)
    {
        ll x;
        cin>>x;
        ml[x]++;
    }
    ll tt=0;
    for(int i=0;i<r;i++)
    {
        ll x;
        cin>>x;
        if(ml[x]) ml[x]--;
        else mr[x]++;
    }
    // cout<<ml[2]<<" "<<mr[2]<<endl;
    ll lx, lr;
    lx=lr=0;
    ll jl=0, jr=0;
    for(auto it:ml)
    {
        jl+=it.second/2;
        lx+=it.second;
    }
    for(auto it:mr)
    {
        jr+=it.second/2;
        lr+=it.second;
    }
    // cout<<lx<<" "<<lr<<endl;
    tt+=min(lx, lr);
    ll baki=abs(lx-lr);
    if(lx>lr)
    {
        ll ekbaki=max(0LL, baki-2*jl);
        tt+=ekbaki+(baki-ekbaki)/2;
    }
    if(lr>lx)
    {
        ll ekbaki=max(0LL, baki-2*jr);
        tt+=ekbaki+(baki-ekbaki)/2;
        // cout<<baki<<" "<<ekbaki<<" "<<jr<<endl;
    }
    cout<<tt<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {

        solve();
    }
    return 0;
}