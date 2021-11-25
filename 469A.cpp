#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define szz 4010

using namespace std;

int main()
{
    ll n;
    cin>>n;
    // cout<<n<<endl;
    set<ll> st;
    for(int i=1;i<=n;i++) st.insert(i);
    ll x;
    cin>>x;
    while (x--)
    {
        ll y;
        cin>>y;
        if(st.size() and st.find(y)!=st.end()) st.erase(st.find(y));
    }
    cin>>x;
    while (x--)
    {
        ll y;
        cin>>y;
        if(st.size() and st.find(y)!=st.end()) st.erase(st.find(y));
    }
    if(st.size())
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    else cout<<"I become the guy."<<endl;
    
    return 0;
}
