#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define MX 1010
using namespace std;

ll ar[MX][MX], f1[MX][MX], f2[MX][MX], b1[MX][MX], b2[MX][MX];

int main()
{
    fast;
    ll n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           cin>>ar[i][j];
        }
    }
    ll mx=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int p=0, q=0;
            if(i-1>=1) p=f1[i-1][j];
            if(j-1>=1) q=f1[i][j-1];
            f1[i][j]=ar[i][j]+max(p, q);
        }
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=m;j>=1;j--)
        {
            int p=0, q=0;
            if(i+1<=n) p=b1[i+1][j];
            if(j+1<=m) q=b1[i][j+1];
            b1[i][j]=ar[i][j]+max(p, q);
        }
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=m;j++)
        {
            int p=0, q=0;
            if(i+1<=n) p=f2[i+1][j];
            if(j-1>=1) q=f2[i][j-1];
            f2[i][j]=ar[i][j]+max(p, q);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=1;j--)
        {
            int p=0, q=0;
            if(i-1>=1) p=b2[i-1][j];
            if(j+1<=m) q=b2[i][j+1];
            b2[i][j]=ar[i][j]+max(p, q);
        }
    }

    for(int i=2;i<n;i++)
    {
        for(int j=2;j<m;j++)
        {
            mx=max(mx, f1[i-1][j]+b1[i+1][j]+f2[i][j-1]+b2[i][j+1]);
//            cout<<mx<<endl;
//            cout<<f2[i-1][j]<<endl;
            mx=max(mx, f1[i][j-1]+b1[i][j+1]+f2[i+1][j]+b2[i-1][j]);
        }
    }
    cout<<mx<<endl;

    return 0;
}


