#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;

int solve()
{
    int n;
    string s;
    cin>>n>>s;
    vi dp(n+10);
    int mx=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1];
        if(s[i-1]==')') dp[i]++;
        else dp[i]--;
        mx=max(mx, dp[i]);
    }
    cout<<mx<<endl;

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















