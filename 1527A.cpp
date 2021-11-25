/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-19 14:02:26 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-19 14:42:18
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{   
    ll n;
    cin>>n;
    ll n1=n;
    string s;
    while(n)
    {
        s.push_back(n%2+'0');
        n/=2;
    }
    ll x=0;
    // cout<<s<<endl;
    if(s.size()) s.pop_back();
    reverse(s.begin(), s.end());
    // cout<<s<<endl;
    for(ll i=0;i<s.size();i++)
    {
        x*=2;
        x+=(s[i]-'0');
    }
    x++;
    cout<<n1-x<<endl;
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