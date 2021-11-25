#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<"= "<<a<<endl
#define vl vector<ll>
#define pll pair<ll, ll>
#define fast ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        vl a(n), b(n);
        for(auto &it: a) cin>>it;
        for(auto &it: b) cin>>it;
        sort(a.begin(), a.end());

        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        for(int i=0;i<a.size()and i<k;i++)
        {
            if(a[i]<b[i]) a[i]=b[i];
        }
        ll ans=0;
        for(auto it:a) ans+=it;
        cout<<ans<<endl;
    }


    return 0;
}

