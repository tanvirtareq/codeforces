#include<bits/stdc++.h>
#define ll long long

using namespace std;

#define md 1000000007

ll qpow(ll b, ll p)
{
    if(p==0) return 1;
    if(p==1) return b;
    ll x=qpow(b, p/2);
    x=(x*x)%md;
    if(p&1) x=(x*b)%md;
    return x;
}

int main()
{
    int t;
    cin>>t;
    int cs=0;

    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        cout<<qpow(n, k)<<endl;
    }
    return 0;
}