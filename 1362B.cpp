#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define inf 100000000000000
#define nl endl
using namespace std;

vi v;
vi mp;

int ck(int k)
{
    vi mp1(3000);
    for(int i=0;i<v.size();i++)
    {
        if(mp1[v[i]]) continue;
        if(mp1[v[i]^k]==1) return 0;
        if(mp[v[i]^k]==0) return 0;
        mp1[v[i]^k]=1;
    }
    return 1;
}

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        v.clear();
        mp.clear();
        v.resize(n);
        mp.resize(3000);
        int mx=0;
        for(auto &it: v)
        {
            cin>>it;
            mp[it]=1;
            mx=max(mx, it);
        }

        int f=0;
        for(int i=1;i<=1024;i++)
        {
            if(ck(i))
            {
                cout<<i<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }


    }

    return 0;
}





