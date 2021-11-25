/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 02:43:50 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 03:04:44
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll, ll> vld;
ll ck(ll hh, ll mm, ll h, ll m)
{
    ll nm=0;
    ll x=hh%10;
    if(vld.count(x)==0) return 0;
    nm+=vld[x]*10;
    x=hh/10;
    if(vld.count(x)==0) return 0;
    nm+=vld[x];
    if(nm>=m) return 0;
    ll nh=0;
    x=mm%10;
    if(vld.count(x)==0) return 0;
    nh+=vld[x]*10;
    x=mm/10;
    if(vld.count(x)==0) return 0;
    nh+=vld[x];
    if(nh>=h) return 0;
    return 1;
}
void solve()
{
    ll  h, m;
    cin>>h>>m;
    ll hh, mm;
    cin>>hh;
    cin.ignore();
    cin>>mm;
    vld[1]=1;
    vld[2]=5;
    vld[5]=2;
    vld[8]=8;
    vld[0]=0;
    while(ck(hh , mm, h, m)==0)
    {
        // cout<<hh<<" "<<mm<<endl;
        mm++;
        hh+=mm/m;
        mm%=m;
        hh%=h;
    }
    if(hh/10==0) cout<<'0';
    cout<<hh<<":";
    if(mm/10==0) cout<<'0';
    cout<<mm<<endl;
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