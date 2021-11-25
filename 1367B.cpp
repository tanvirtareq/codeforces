#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>

using namespace std;

int solve()
{
    int n;
    cin>>n;
    vi v(n);
    for(auto &it:v) cin>>it;
    int ct0=0, ct1=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=v[i]%2)
        {
            if(v[i]%2==0) ct0++;
            else ct1++;
        }
    }
    if(ct0!=ct1) cout<<-1<<endl;
    else cout<<ct0<<endl;
    return 0;
}

int main()
{

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}





