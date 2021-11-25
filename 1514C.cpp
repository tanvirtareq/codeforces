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
    int t=1;
    // cin>>t;
    int cs=0;

    while(t--)
    {
        ll n;
        cin>>n;
        ll x=1;
        vector<ll>  v, as;
        v.push_back(1);
        ll lst=1;
        for(ll i=2;i<n;i++)
        {
            if(__gcd(n, i)!=1) continue;
            x=(x*i)%n;
            v.push_back(i);
            if(x==1) lst=i;
        }
        for(auto it:v)
        {
            as.push_back(it);
            if(it==lst) break;
        }
        cout<<as.size()<<endl;
        for(auto it:as) cout<<it<<" ";
        cout<<endl;


    }
    return 0;
}