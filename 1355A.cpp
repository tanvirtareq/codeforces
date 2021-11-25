#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
using namespace std;

ll mn(ll a)
{
    ll mnn=10;
    if(a==0) return 0;
    while(a)
    {
        mnn=min(a%10, mnn);
        a=a/10;
    }
    return mnn;
}

ll mx(ll a)
{
    ll mnn=0;
    if(a==0) return 0;
    while(a)
    {
        mnn=max(a%10, mnn);
        a=a/10;
    }
    return mnn;
}

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        ll a, k;
        cin>>a>>k;
        k--;
        while(k--)
        {
            ll dk=mn(a)*mx(a);
            if(dk==0) break;
            a+=dk;
        }
        cout<<a<<endl;
    }


    return 0;
}
