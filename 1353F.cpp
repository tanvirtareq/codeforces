#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<"= "<<a<<endl
#define vl vector<ll>
#define pll pair<ll, ll>
#define fast ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0)
#define inf 1000000000000000000

using namespace std;

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        ll a[n][m], dp[n][m];
        ll ans=inf;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) cin>>a[i][j];


        for(int i1=0;i1<n;i1++)
        {
            for(int j1=0;j1<m;j1++)
            {
                ll x=a[i1][j1]-i1-j1;
                if(x>a[0][0]) continue;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        ll y=x+i+j;
                        if(a[i][j]-y<0)
                        {
                            dp[i][j]=inf;
                            continue;
                        }
                        if(i==0 and j==0)
                        {
                            dp[i][j]=a[i][j]-y;
                            continue;
                        }
                        ll p,q;
                        p=q=inf;
                        if(j!=0)
                        {
                            p=dp[i][j-1];
                        }
                        if(i!=0)
                        {
                            q=dp[i-1][j];
                        }
                        dp[i][j]=min(p, q);
                        if(dp[i][j]!=inf)
                        {
                            dp[i][j]+=a[i][j]-y;
                        }
                    }
                }
                ans=min(ans, dp[n-1][m-1]);
            }
        }
        cout<<ans<<endl;

    }


    return 0;
}

/**

1
5 5
2 5 4 8 3
9 10 11 5 1
12 8 4 2 5
2 2 5 4 1
6 8 2 4 2
*/

