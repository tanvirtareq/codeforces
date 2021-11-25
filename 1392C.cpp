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
    ll n, k;
    cin>>n;
    vector<long long> v(n);
    for(auto &it:v) cin>>it;
    ll x=0;
    for(int i=1;i<n;i++)
    {
        x+=max(0LL, v[i-1]-v[i]);
    }
    cout<<x<<endl;

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