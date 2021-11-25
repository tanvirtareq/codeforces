#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define md 1000000007

using namespace std;

int solve()
{
    ll n;
    cin>>n;
    map<ll, ll> mp;
    ll mx=1;
    set<ll> st;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
        mx=max(mx, mp[x]);
        st.insert(x);
    }
    ll ct=0;
    for(auto it:mp)
    {
        if(it.second==mx) ct++;
    }

    ll tt=n-mx*ct+mx-1;
    ll dvd=tt/(mx-1);
    cout<<(dvd-1+ct-1)<<endl;

    // cout<<st.size()-1<<endl;
    // if(mx==ct)
    // {
    //     cout<<ct-1<<endl;
    // }
    // cout<<(n-1)/(mx-1)-1<<endl;
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