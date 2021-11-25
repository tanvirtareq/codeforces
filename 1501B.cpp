#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll qpow(ll b , ll p, ll md)
{
    if(p==0) return 1;
    ll x=(qpow(b, p/2, md))%md;
    x=(x*x)%md;
    if(p&1) x=(x*b)%md;
    return x;
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    set<ll> st;
    for(int i=0;i<n;i++) st.insert(i);
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        ll y=i-x;
        // cout<<y<<endl;
        // cout<<st.size()<<endl;
        // cout<<i<<endl;
        // //  cout<<st.size()<<endl;
        // for(auto it:st) cout<<it<<" ";
        //  cout<<endl;
        while(st.size() and st.upper_bound(y)!=st.end() and  *st.upper_bound(y)<=i) st.erase(st.upper_bound(y));
    }
    // cout<<st.size()<<endl;
    // for(auto it:st) cout<<it<<" ";
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(st.size() and st.find(i)!=st.end()) cout<<0<<" ";
        else cout<<"1 ";
    }
    cout<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {

        solve();
    }
    return 0;
}