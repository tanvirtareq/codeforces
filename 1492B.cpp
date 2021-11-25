/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 03:10:22 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 03:24:57
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    stack<ll> stk;
    set<ll> st;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        stk.push(x);
        st.insert(x);
    }
    ll lst=n;
    vector<ll> v;
    while(lst!=0 and stk.size())
    {
        if(st.find(lst)==st.end())
        {
            lst--;
            continue;
        }
        stack<ll> tmp;
        while(stk.size())
        {
            ll x=stk.top();
            stk.pop();
            tmp.push(x);
            st.erase(x);
            if(x==lst) break;
        }
        lst--;
        while(tmp.size())
        {
            v.push_back(tmp.top());
            tmp.pop();
        }
    }
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
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