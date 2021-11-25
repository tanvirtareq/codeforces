#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define md 1000000007

using namespace std;
int solve()
{
    ll n , m;
    cin>>n>>m;
    n--, m--;
    string s[n+10];
    for(int i=0;i<=n;i++) cin>>s[i];
    ll ct=0;
    for(int i=0;i<m;i++)
    {
        if(s[n][i]=='D') ct++;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i][m]=='R') ct++;
    }
    cout<<ct<<endl;
    return 0;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}