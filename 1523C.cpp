/*
 * @Author: tanvir tareq 
 * @Date: 2021-06-02 10:53:08 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-06-02 11:14:17
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    deque<ll> dq;
    while(n--)
    {
        ll x;
        cin>>x;
        if(x==1)
        {
            dq.push_back(x);
        }
        else
        {
            while(dq.size() and dq.back()+1!=x) dq.pop_back();
            if(dq.size())
            {
                dq.pop_back();
            }
            dq.push_back(x);
        }
        for(int i=0;i<dq.size()-1;i++)
        {
            cout<<dq[i]<<'.';
        }
        cout<<dq.back()<<endl;
    }
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