/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-30 12:49:24 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-30 12:58:31
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll b[2*n];
    memset(b, -1, sizeof(b));
    set<ll> st;
    for(int i=1;i<=2*n;i++) st.insert(i);
    for(int i=0;i<n;i++)
    {
        b[2*i]=a[i];
        st.erase(a[i]);
    }
    for(int i=1;i<2*n;i+=2)
    {
        // cout<<b[i-1]<<" "<<b[i]<<" ";
        auto it=st.lower_bound(b[i-1]);
        if(it==st.end())
        {
            cout<<-1<<endl;
            return;
        }
        b[i]=*it;
        st.erase(it);
    }
    // cout<<endl;
    for(int i=0;i<2*n;i++) cout<<b[i]<<" ";
    cout<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}