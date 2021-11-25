/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-28 05:15:51 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-28 05:39:38
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n%2)
    {
        cout<<-1<<endl;
        return;
    }
    n/=2;
    ll cur=1;
    vector<ll> v;
    while(n)
    {
        if(cur>n)
        {
            cur=1;
        }
        n-=cur;
        if(cur==1) v.push_back(1);
        else v.push_back(0);
        cur=cur*2;
    }
    cout<<v.size()<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;

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