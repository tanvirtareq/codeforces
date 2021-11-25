#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;

ll seglenth(ll l1, ll r1, ll l2, ll r2)
{
    if(l1>l2)
    {
        swap(l1, l2);
        swap(r1, r2);
    }
    if(r1<l2)
    {
        return r1-l2;
    }
    else if(r1>=r2)
    {
        return r2-l2;
    }
    else
    {
        return r1-l2;
    }

}

int solve()
{
    ll n, k;
    cin>>n>>k;
    ll l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;
    ll strt=seglenth(l1, r1, l2, r2);
    ll mx=max(r1, r2)-min(l1, l2);
    if(strt>=0)
    {
        ll ct=strt*n;
        k-=ct;
        mx-=strt;
        strt=0;
    }
    if(k<=0)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ct=0;
    if(strt==0)
    {
        ct+=n*mx;
        if(ct>=k)
        {
            cout<<k<<endl;
            return 0;
        }
        k-=ct;
        cout<<ct+2*k<<endl;
        return 0;
    }
    else
    {
        // dbg(strt);
        ll x=abs(strt);
        ll mn=x;
        // dbg(mn);
        if(mx>=k) mn+=k;
        else
        {
            mn+=mx;
            mn+=(k-mx)*2;
        }
        // dbg(mn);

        for(int i=2;i<=n;i++)
        {
            ll x=i*abs(strt);
            x+=mx*(i-1);
            if(mx>=(k-mx*(i-1)))
            {
                x+=k-mx*(i-1);
            }
            else
            {
                x+=mx;
                x+=(k-mx*i)*2;
            }
            // dbg(x);
            mn=min(mn, x);

        }
        cout<<mn<<endl;
        return 0;
    }


    return 0;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
