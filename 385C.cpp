#include<bits/stdc++.h>
#define ll long long
#define MX 10000000LL
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int vis[MX+10];
ll a[MX+10] , b[MX+10];
int main()
{
    fast;
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        b[x]++;
    }

    for(int i=2;i<=MX;i++)
    {
        if(vis[i]==1) continue;
        for(int j=i;j<=MX;j+=i)
        {
            vis[j]=1;
            a[i]+=b[j];
        }
//        cout<<a[i]<<endl;
    }
    for(int i=3;i<=MX;i++)
    {
        a[i]+=a[i-1];
    }
    int m;
    cin>>m;
    while(m--)
    {
        ll l, r;
        cin>>l>>r;
        cout<<a[min(r, MX)]-a[min(MX, l-1)]<<'\n';
    }

}





