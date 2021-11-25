#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
// #define md 998244353LL

void solve()
{
    ll n;
    cin>>n;
    std::vector<ll> v(n);
    for(auto &it:v) cin>>it;
    // cout<<v[0]<<" "<<v[2]<<endl;
    int j=0;
    while(j<v.size() and v[j]==v.back())
    {
        // cout<<v[j]<<" "<<v.back()<<endl;
        v.pop_back();
        j++;
    }
    vector<ll> vv;
    for(int i=j;i<v.size();i++)
    {
        vv.push_back(v[i]);
    }
    if(vv.size()==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    ll a=vv[0];
    ll b=vv.back();
    // cout<<a<<" "<<b<<endl;
    int f=0;
    ll l=0, r=vv.size()-1;
    while(l<r)
    {
        if(vv[l]==a) l++;
        else if(vv[r]==a) r--;
        else if(vv[l]==vv[r])
        {
            l++, r--;
        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    f=0;
    l=0, r=vv.size()-1;
    while(l<r)
    {
        // cout<<vv[l]<<" "<<vv[r]<<endl;
        if(vv[l]==b) l++;
        else if(vv[r]==b) r--;
        else if(vv[l]==vv[r])
        {
            l++;
            r--;
        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}