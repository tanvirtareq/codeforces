#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    set<ll> st;
    ll f=0;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
        if(x<0) f=1;
    }
    if(f)
    {
        cout<<"NO"<<'\n';
        return;
    }
    while(st.size()<=300)
    {
        vector<ll> v;
        for(auto it:st)
        {
            for(auto bt:st)
            {
                ll a=abs(it-bt);
                if(st.find(a)==st.end()) v.push_back(a);
            }
        }
        if(v.size()==0)
        {
            cout<<"YES"<<'\n';
            cout<<st.size()<<'\n';
            for(auto it:st)
            {
                cout<<it<<" ";
            }
            cout<<'\n';
            return;
        }
        for(auto it:v) st.insert(it);
    }
    cout<<"NO"<<'\n';
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}