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

    ll n;
    cin>>n;
    vector<long long>  v(n);
    for(auto &it:v) cin>>it;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    sort(v.begin(), v.end());
    if(v[0]==v.back())
    {
        cout<<n<<endl;
    }
    else cout<<1<<endl;
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