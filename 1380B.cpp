/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-30 11:06:53 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-30 11:21:05
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve()
{
    string s;
    cin>>s;
    map<char, ll> mp;
    for(auto it:s) mp[it]++;
    char ch='R';
    if(mp['S']>mp[ch])
    {
        ch='S';
    }
    if(mp['P']>mp[ch]) 
    {
        ch='P';
    }
    char c;
    if(ch=='R') c='P';
    if(ch=='P') c='S';
    if(ch=='S') c='R';
    for(int i=0;i<s.size();i++) cout<<c;
    cout<<endl;
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}