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
    string s;
    cin>>s;
    ll ct=0;
    for(auto it:s) ct+=(it=='0');
    if(ct==0)
    {
        cout<<"DRAW"<<endl;
        return;
    }
    if(ct==1)
    {
        cout<<"BOB"<<endl;
        return;
    }
    if(ct%2==0)
    {
        cout<<"BOB"<<endl;
        return;
    }
    cout<<"ALICE"<<endl;
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