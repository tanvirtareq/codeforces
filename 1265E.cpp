#include<bits/stdc++.h>

#define ll long long
#define mod 998244353

using namespace std;

ll power(ll b, ll p)
{
    if(p==0) return 1;
    if(p==1) return b;
    ll x=power(b, p/2);
    x=(x*x)%mod;
    if(p&1) x=(x*b)%mod;
    return x;
}

ll inv(ll x)
{
    ll z=power(x, mod-2);
//    cout<<z<<endl;
    return z;
}

int main()
{
//    cout<<(56*inv(50))%mod<<endl;
//    cout<<(800*inv(10000))%mod<<endl;

    ll n;
    cin>>n;
    ll ar[n+10], par[n+10];

    for(int i=1;i<=n;i++) cin>>ar[i];

    ll nom=1;
    ll pr=1;
    ll d=1;
    for(int i=1;i<n;i++)
    {
//        d=(d*100)%mod;
        pr=(((pr*ar[i])%mod)*inv(100))%mod;
        par[i]=pr;
        nom=(nom+pr)%mod;
    }
//    cout<<nom<<endl;



    ll den=(((1-(100-ar[1])*inv(100))%mod+mod)%mod+mod)%mod;
//    cout<<den<<endl;
//cout<<par[1]<<endl;
//cout<<(par[1]*((100-ar[2])*inv(100)%mod))%mod<<endl;

    for(int i=2;i<=n;i++)
    {
        ll x=(par[i-1]*(100-ar[i]))%mod;
        ll y=(x*inv(100))%mod;
        den=(den-y+mod)%mod;
//        den=((den-par[i-1]*((100-ar[i])*inv(100))%mod)%mod+mod)%mod;
//        cout<<den<<endl;
    }
//    cout<<den<<endl;

    cout<<(nom*inv(den))%mod<<endl;

    return 0;
}


