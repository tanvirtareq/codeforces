#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll> x(3), x1(3), v(6);
    for(auto &it:x) cin>>it;
    for(auto &it:x1) cin>>it;
    for(auto &it:v) cin>>it;
    ll ans=0;
    if(x[1]<0) ans+=v[0];
    if(x[1]>x1[1]) ans+=v[1];
    if(x[2]<0) ans+=v[2];
    if(x[2]>x1[2]) ans+=v[3];
    if(x[0]<0) ans+=v[4];
    if(x[0]>x1[0]) ans+=v[5];
    cout<<ans<<endl;
    return 0;
}
