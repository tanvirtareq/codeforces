#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
using namespace std;

ll mn(ll a)
{
    ll mnn=10;
    if(a==0) return 0;
    while(a)
    {
        mnn=min(a%10, mnn);
        a=a/10;
    }
    return mnn;
}

ll mx(ll a)
{
    ll mnn=0;
    if(a==0) return 0;
    while(a)
    {
        mnn=max(a%10, mnn);
        a=a/10;
    }
    return mnn;
}

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &it: v) cin>>it;
        sort(v.begin(), v.end());
        int tt=0;

        int i=0, j=0;
        int mx=v[0];
        while(i<v.size())
        {
            j++;
            if(i+j>v.size()) break;
            mx=max(mx, v[i+j-1]);
            if(mx<=j)
            {
                tt++;
                i=i+j;
                j=0;
                mx=v[i];
            }

        }
        cout<<tt<<endl;
    }


    return 0;
}

