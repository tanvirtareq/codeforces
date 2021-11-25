/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-17 08:33:54 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-17 08:44:32
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    set<ll> st;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }
    ll mex=0;
    for(int i=0;i<=n+10;i++)
    {
        if(st.find(i)==st.end())
        {
            mex=i;
            break;
        }
    }
    ll mx=*st.rbegin();
    if(mex>=mx)
    {
        cout<<st.size()+k<<endl;
        return;
    }
    if(k)
    st.insert((mex+mx+1)/2);
    cout<<st.size()<<endl;
    return;
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