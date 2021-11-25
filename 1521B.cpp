#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    vector<pair<pair<ll, ll> , pair<ll, ll> > > ans;
    for(int i=1;i<n;i++)
    {
        if(v[i]>=v[i-1])
        {
            v[i]=v[i-1]+1;
            ans.push_back({{i-1, i}, {v[i-1], v[i-1]+1}});
            continue;
        }
        else if(i==1)
        {
            v[i-1]=v[i]+1;
            ans.push_back({{i-1, i}, {v[i]+1, v[i]}});
            continue;
        }
        else
        {
            ll x=v[i]+1;
            while(__gcd(x, v[i-2])!=1 or __gcd(x, v[i])!=1) x++;
            v[i-1]=x;
            ans.push_back({{i-1, i}, {x, v[i]}});
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it.first.first+1<<" "<<it.first.second+1<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        // printf("Case #%d: ", cs);
        solve();
    }
    return 0;
}