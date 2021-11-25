#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define md 1000000007

using namespace std;

int solve()
{
    ll n, m, x, y;
    cin>>n>>m>>x>>y;
    n--, m--, x--, y--;
    int ct=1;
    ll a[n+10][m+10];
    memset(a, 0, sizeof a);
    // a[x][y]=ct++;
    for(int i=x;i>=0;i--)
    {
        a[i][y]=ct++;
        cout<<i+1<<" "<<y+1<<endl;
    }
    for(int i=x+1;i<=n;i++)
    {
        a[i][y]=ct++;
        cout<<i+1<<" "<<y+1<<endl;
    }
    for(int i=1;i<=m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<=n;j++)
                cout<<j+1<<" "<<(y+i)%(m+1)+1<<endl;
        }
        else
        {
            for(int j=n;j>=0;j--)
            {
                cout<<j+1<<" "<<(y+i)%(m+1)+1<<endl;
            }
        }
        
    }
    return 0;
}

int main()
{
    fast;
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}