#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n), b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    vector<ll> dl(n), dr(n);
    dl[0]=a[0]*b[0];
    for(int i=1;i<n;i++)
    {
        dl[i]=dl[i-1]+a[i]*b[i];
    }
    dr[n-1]=a[n-1]*b[n-1];
    for(int i=n-2;i>=0;i--)
    {
        dr[i]=dr[i+1]+a[i]*b[i];
    }
    ll mx=dr[0];
    for(int i=0;i<n;i++)
    {
        // cout<<mx<<endl;
        ll x=a[i]*b[i];
        for(int d=1;d<n;d++)
        {
            if(i+d>=n or i-d<0) break;
            x+=a[i+d]*b[i-d]+a[i-d]*b[i+d];
            ll tm=x;
            if(i-d-1>=0) tm+=dl[i-d-1];
            if(i+d+1<n) tm+=dr[i+d+1];
            mx=max(mx, tm);
        }
        // cout<<mx<<endl;
        ll l=i, r=i+1;
        if(r>=n) continue;
        x=0;
        while(l>=0 and r<n)
        {
            x+=a[l]*b[r]+a[r]*b[l];
            ll tm=x;
            if(l-1>=0) tm+=dl[l-1];
            if(r+1<n) tm+=dr[r+1];
            mx=max(mx, tm);
            // cout<<mx<<endl;
            // cout<<"tm"<<tm<<endl;
            l--, r++;
        }
        l=i-1, r=i;
        x=0;
        while(l>=0 and r<n)
        {
            x+=a[l]*b[r]+a[r]*b[l];
            ll tm=x;
            if(l-1>=0) tm+=dl[l-1];
            if(r+1<n) tm+=dr[r+1];
            mx=max(mx, tm);
            // cout<<mx<<endl;
            // cout<<"tm"<<tm<<endl;
            l--, r++;
        }
    }
    cout<<mx<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;
}