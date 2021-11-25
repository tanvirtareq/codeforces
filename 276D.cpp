#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define md 100000000
using namespace std;

set<int> ad[200000];

int main()
{
    fast;
    ll l, r;
    cin>>l>>r;
    ll ans=0;
    for(ll i=60;i>=0;i--)
    {
        if(((1LL<<i)&l)==((1LL<<i)&r))
        {

        }
        else{
            ans+=((1LL<<(i+1))-1);
            break;
        }
    }
    cout<<ans;
}



