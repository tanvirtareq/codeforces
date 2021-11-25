#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define nl '\n'
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define dbg(a) cout<<#a<<"="<<a<<nl

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vl p(n);
    for(auto &it:p)
        cin>>it;
    vl v(5);
    for(auto &it:v)
        cin>>it;

    ll c=0;
    vl an(5);
    for(ll i=0; i<p.size(); i++)
    {
        c+=p[i];
        auto it=upper_bound(v.begin(), v.end(), c);
        while(it!=v.begin())
        {
            it--;
            ll id=it-v.begin();
            an[id]+=c/v[id];
            c=c%v[id];
            it=upper_bound(v.begin(), v.end(), c);
        }
    }
    for(auto it:an)
        cout<<it<<" ";
    cout<<nl<<c<<nl;

    return 0;
}
