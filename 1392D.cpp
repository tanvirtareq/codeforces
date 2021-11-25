#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define md 1000000007
#define inf 300000

using namespace std;

ll solve(ll n, string s)
{
    // ll n;
    // cin >> n;
    vector<long long> v(n), dp[2][2];
    // string s;
    // cin >> s;
    dp[0][0].resize(n);
    dp[0][1].resize(n);
    dp[1][0].resize(n);
    dp[1][1].resize(n);

    dp[0][0][1] = 0;
    dp[0][1][1] = inf;
    dp[1][0][1] = inf;
    dp[1][1][1] = 0;
    if (s[1] == s[0])
    {
        dp[1][1][1]=1;
    }
    if(s[0]=='L' and s[1]=='R') dp[1][1][1]=2;

    for(int i=2;i<n-1;i++)
    {
        dp[0][0][i]=dp[0][1][i-1];
        dp[1][0][i]=dp[1][1][i-1];
        if(s[i]==s[i-1])
        {
            dp[0][1][i]=min(dp[0][0][i-2], dp[0][1][i-2])+1;
            dp[1][1][i]=min(dp[1][0][i-2], dp[1][1][i-2])+1;
        }
        else if(s[i-1]=='R' and s[i]=='L')
        {
            dp[0][1][i]=min(dp[0][0][i-2], dp[0][1][i-2]);
            dp[1][1][i]=min(dp[1][0][i-2], dp[1][1][i-2]);
        }
        else {
            dp[0][1][i]=min(dp[0][0][i-2], dp[0][1][i-2])+2;
            dp[1][1][i]=min(dp[1][0][i-2], dp[1][1][i-2])+2;
        }
        // dbg(i);
        // dbg(dp[0][0][i]);
        // dbg(dp[0][1][i]);
        // dbg(dp[1][0][i]);
        // dbg(dp[1][1][i]);
        
    }
    // dbg(n-2);
    // dbg(dp[1][1][(n-2)]);
    // dbg(dp[1][1][6]);
    
    ll mn=dp[1][1][n-2];
    // dbg(mn);
    ll nibo=0;
    if(s[n-1]==s[n-2]) nibo=1;
    if(s[n-2]=='L' and s[n-1]=='R') nibo=2;
    mn=min(mn, dp[0][0][n-3]+nibo);
    mn=min(mn, dp[0][1][n-3]+nibo);
    mn=min(mn, dp[1][0][n-3]+nibo);
    mn=min(mn, dp[1][1][n-3]+nibo);
    // dbg(nibo);
    // dbg(mn);

    nibo=0;
    if(s[n-1]==s[0]) nibo=1;
    if(s[n-1]=='L' and s[0]=='R') nibo=2;

    mn=min(mn, dp[0][0][n-2]+nibo);
    mn=min(mn, dp[0][1][n-2]+nibo);

    // cout<<mn<<endl;

    return mn;

    // cout<<min(min(dp[1][0][n-1], dp[1][1][n-1]), min(dp[1][0][n-1], dp[1][1][n-1]))<<endl;

    // return 0;
}

int sl()
{
    int n;
    string s;
    cin>>n>>s;
    ll mn=solve(n, s);
    string s1;
    for(int i=1;i<n;i++) s1.push_back(s[i]);
    s1.push_back(s[0]);
    // mn=min(mn, solve(n, s1));
    cout<<mn<<endl;
}

ll all(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[0]) return 0;
    }
    return 1;
}

ll sl2()
{
    ll n;
     string s;
    cin>>n>>s;
    if(all(s))
    {
        ll x=(n+2)/3;
        cout<<x<<endl;
        return 0;
    }
    int st=0;
    while(s[st]==s.back() and st<n)
    {
        s.push_back(s[st]);
        st++;
    }
    ll ct=0;
    ll x=1;
    for(int i=st+1;i<s.size();i++){
        if(s[i]==s[i-1])
        {
            x++;
        }
        else
        {
            ct+=x/3;
            x=1;
        }
    }
    ct+=x/3;
    cout<<ct<<endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        sl2();
    return 0;
}