#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, x;
    cin>>n>>x;
    vector<ll> v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(), v.end());
    ll tt=0;
    for(int i=0;i<n;i++)
    {
        tt+=v[i];
        if(tt==x)
        {
            if(i==n-1)
            {
                cout<<"NO"<<endl;
                return;
            }
            swap(v[i], v[i+1]);
            break;
        }
    }
    cout<<"YES"<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {

        solve();
    }
    return 0;
}