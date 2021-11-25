#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<ll>
#define ii pair<ll, ll>
#define dbg(a) cout<<#a<<"="<<a<<endl
using namespace std;

ll cst, n, a, r, m;


ll chk(vector<ll> &v, ll h)
{
    ll c=0;
    ll barse=0, komse=0;
    for(ll i=0; i<v.size(); i++)
    {
        if(h>v[i])
        {
            c+=(h-v[i])*a;
            barse+=h-v[i];
        }
        else if(h<v[i])
        {
            c+=(v[i]-h)*r;
            komse+=v[i]-h;
        }
    }
    ll mng=min(barse, komse);
    barse-=mng;
    komse-=mng;
    c=min(c, mng*m+barse*a+komse*r);
    return c;
}

void slv2(vector<ll> &v)
{
    ll l=v[0];
    ll r=v.back();
    for(auto it:v)
    while(l<r)
    {
        ll m1=l+(r-l)/3;
        ll m2=r-(r-l)/3;
        ll cst1=chk(v, m1);
        ll cst2=chk(v, m2);
//        dbg(m1);
//        dbg(cst1);
//        dbg(m2);
//        dbg(cst2);
//        if(cst1==cst2)
//        {
//            l=(l+r)/2;
//            r=l;
//        }
        if(cst1<cst2)
        {
            r=m2-1;
        }
        else
            l=m1+1;
    }
//    dbg(l);
    cst+=chk(v, l);
    return;
}

int main()
{
    fast;

    cin>>n>>a>>r>>m;
    vector<ll> v(n);

    for(auto &it: v)
        cin>>it;
    sort(v.begin(), v.end());
    slv2(v);
    cout<<cst<<endl;


    return 0;
}




