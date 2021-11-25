#include <bits/stdc++.h>
#define ll long long
#define nl '\n'

using namespace std;





int main()
{
    ll t=1;
    // cin>>t;
    // scanf("%lld", &t);
    for (int cs = 1; cs <= t; cs++)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll> > v;
        ll mx=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2)
            {
                v.push_back({(i+1)/2, (i+1)/2});
            }
            else
            {
                v.push_back({v.back().first,v.back().first+1 });
            }
            mx=max(mx, v.back().first);
            mx=max(mx, v.back().second);
        }
        cout<<mx<<endl;
        for(auto it:v) cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
