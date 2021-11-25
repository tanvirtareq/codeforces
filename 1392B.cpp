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
    cin>>n>>k;
    vector<long long> v(n);
    for(auto &it:v) cin>>it;
    ll mx=v[0];
    for(auto it:v) mx=max(it, mx);
    if(k)
    {
        k--;
        for(int i=0;i<n;i++)
        {

            v[i]=mx-v[i];
        }
    }
    mx=v[0];
    for(auto it:v) mx=max(it, mx);
    if(k%2==0)
    {
        for(auto it:v) cout<<it<<" ";
        cout<<endl;
    }
    else
    {
        for(auto it:v) cout<<mx-it<<" ";
        cout<<endl;
    }
    

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