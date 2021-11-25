#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll mp[n+7][30];
    memset(mp, 0, sizeof(mp));
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<26;j++)
        {
            mp[i][j]=mp[i-1][j];
        }
        mp[i][s[i-1]-'a']++;
    }
    while(q--)
    {
        ll l, r;
        cin>>l>>r;
        ll ct=0;
        for(int i=0;i<26;i++)
        {
            ll x=mp[r][i]-mp[l-1][i];
            ct+=x*(i+1);
        }
        cout<<ct<<endl;
    }


}

int main()
{

    int t = 1;
    // cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}