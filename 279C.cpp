
#include<bits/stdc++.h>
#define MX 100010
#define dbg(a) cout<<#a<<"="<<a<<endl
#define md 1000000007
#define ll long long
using namespace std;

int a[MX], dp[2][MX];

int main()
{
    int n, k;
    cin>>n>>k;
    dp[0][0]=dp[1][0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>=a[i-1]) dp[0][i]=dp[0][i-1];
        else dp[0][i]=i;
        if(a[i]<=a[i-1]) dp[1][i]=dp[1][i-1];
        else dp[1][i]=i;
    }
    while(k--)
    {
        int l, r;
        cin>>l>>r;
        if(dp[0][dp[1][r]]<=l) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}


