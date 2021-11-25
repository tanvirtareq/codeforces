/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-17 09:36:57 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-17 10:50:57
 */
#include<bits/stdc++.h>
#define ll int
using namespace std;

ll f(vector<ll> &a, vector<ll> &b)
{
    ll n=a.size();
    ll m=b.size();
    if(n==0 or m==0) return 0;
    // cout<<n<<" "<<m<<endl;
    vector<ll> dp(m+1);
    for(int i=m-1;i>=0;i--)
    {
        dp[i]=dp[i+1];
        if(binary_search(a.begin(), a.end(), b[i])) dp[i]++;
    }
    ll rt=0;
    auto it=b.begin();
    for(int i=0;i<m;i++)
    {
        it++;
        ll j=(upper_bound(a.begin(), a.end(), b[i])-a.begin());
        ll k=(it-upper_bound(b.begin(), b.end(), b[i]-j));
        rt=max(rt, k+dp[i+1]);
    }
    return rt;
}

void solve()
{
    ll n, m;
    cin>>n>>m;
    vector<ll> a[2], b[2];
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a[x>0].push_back(abs(x));
    }
    reverse(a[0].begin(), a[0].end());

    for(int i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        b[x>0].push_back(abs(x));
    }
    reverse(b[0].begin(), b[0].end());
    cout<<f(a[0], b[0])+f(a[1], b[1])<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;
}