#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define inf 100000000000000
using namespace std;

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(auto &it: v) cin>>it;
        sort(v.begin(), v.end());
        ll mn=inf;
        for(int i=1;i<v.size();i++)
        {
            mn=min(mn, v[i]-v[i-1]);
        }
        cout<<mn<<endl;
    }

    return 0;
}


