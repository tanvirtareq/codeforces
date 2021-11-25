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
        char ar[n+10][n+10];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cin>>ar[i][j];
        }
        int f=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(ar[i][j]=='1')
                {
                    if(i+1>n or j+1>n or ar[i+1][j]=='1' or ar[i][j+1]=='1')
                        continue;
                    else
                    {
                        f=0;
                        break;
                    }
                }
            }
        }
        if(f==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;
}





