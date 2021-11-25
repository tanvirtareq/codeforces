#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;

int solve()
{

    vl v(3);
    cin>>v[0]>>v[1]>>v[2];
    vl a=v;
    sort(v.begin(), v.end());
    if(v[2]!=v[1])
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<3; i++)
        {
            if(a[i]==v[0])
            {
                if(i==0)
                {
                    cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
                    return 0;
                }
                if(i==1)
                {
                    cout<<v[0]<<" "<<v[2]<<" "<<v[0]<<endl;
                    return 0;
                }
                if(i==2)
                {
                    cout<<v[2]<<" "<<v[0]<<" "<<v[0]<<endl;
                    return 0;
                }
            }

        }
        cout<<endl;
    }
    return 0;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}













