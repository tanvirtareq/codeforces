#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>

using namespace std;

int solve()
{
    ll n;
    cin>>n;
    vl v(n);
    for(auto &it:v) cin>>it;
    vl ct(70);
    for(ll i=0;i<=60;i++)
    {
        for(auto it:v) ct[i]+=(((1LL<<i)&it)!=0);
    }
    ll an=0;
    for(int i=0;i<n;i++)
    {
        ll x=0;
        for(int j=0;j<=60;j++)
        {
            if(ct[j]>0)
            {
                ct[j]--;
                x+=(1LL<<j);
            }
        }
        an+=x*x;
    }
    cout<<an<<endl;


    return 0;
}

int main()
{
    solve();

    return 0;
}





