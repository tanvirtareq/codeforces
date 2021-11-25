#include<bits/stdc++.h>
#define ll long long
using namespace std;
void sl()
{
    ll n, m;
    cin>>n>>m;

    vector<ll> v, xx(m);
    for(auto &it:xx) cin>>it;
    v.assign(n, -1);
    for(int i=0;i<m-1;i++)
    {
        ll x=xx[i]-1;
        ll y=xx[(i+1)%m]-1;
        ll tt=y-x;
        if(tt<=0) tt+=n;
        if(v[x]!=-1 and v[x]!=tt)
        {
            cout<<-1<<endl;
            // cout<<"so"<<" "<<i<<endl;
            return;
        }
        v[x]=tt;
        // cout<<x<<" "<<y<<" "<<tt<<endl;
    }
    // cout<<"a;d"<<endl;
    // for(int i=0;i<n;i++) cout<<v[i]<<" ";
    // cout<<endl;
    set<ll> st;
    for(int i=1;i<=n;i++) st.insert(i);
    for(int i=0;i<n;i++)
    {
        if(v[i]==-1) continue;
        if(st.find(v[i])==st.end())
        {
            cout<<-1<<endl;
            return;
        }
        st.erase(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!=-1) continue;
        v[i]=*st.begin();
        st.erase(st.begin());
    }
    for(int i=0;i<n;i++) cout<<v[i]<<" ";

    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        sl();
    }
    return 0;
}