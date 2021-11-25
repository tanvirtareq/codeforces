/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 04:01:27 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 05:12:35
 */

#include<bits/stdc++.h>
#define ll long long
#define double long double
using namespace std;
double h, c, t;
#define eps 1e-15
double ck(ll x)
{
    return abs((x*h+h+x*c)/(2*x+1)-t);
}
void solve()
{
    
    cin>>h>>c>>t;
    ll l=0, r=1000000000000LL;
    if(abs(h-t)<=eps)
    {
        cout<<1<<endl;
        return;
    }
    ll mn=2;
    // double mnx=
    while(l<=r)
    {
        ll xa=l+(r-l)/3;
        ll xb=r-(r-l)/3;
        double fa=ck(xa);
        double fb=ck(xb);
        if(abs(fa-fb)<=eps)
        {
            mn=xa;
            r=xb-1;
        }
        else if(ck(xa)>ck(xb))
        {
            mn=xb;
            l=xa+1;
        }
        else
        {
            mn=xa;
            r=xb-1;
        }
    }
    
    double fc=ck(mn);
    double d=abs((h+c)/2-t);
    if(mn==0)
    {
        cout<<1<<endl;
        return;
    }
    if(abs(d-fc)<=eps)
    {
        cout<<2<<endl;
        return;
    }
    if(d<=fc)
    {
        cout<<2<<endl;
        return;
    }
    cout<<2*mn+1<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}