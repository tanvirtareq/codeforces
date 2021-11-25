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
        vector<ll> ev, od;
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(x%2==0) ev.push_back(x);
            else od.push_back(x);
        }
        if(ev.size()%2==0 and od.size()%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            sort(ev.begin(), ev.end());
            sort(od.begin(), od.end());
            int f=0;
            for(int i=0;i<ev.size();i++)
            {
                if(count(od.begin(), od.end(), ev[i]+1))
                {
                    f=1;
                    break;
                }
                if(count(od.begin(), od.end(), ev[i]-1))
                {
                    f=1;
                    break;
                }
            }
            if(f==1) cout<<"YES"<<endl;

            else cout<<"NO"<<endl;

        }

    }

    return 0;
}



