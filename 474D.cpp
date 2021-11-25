#include<bits/stdc++.h>
#define ll long long
#define md 1000000007
#define dbg(a) cout<<#a<<"="<<a<<endl
using namespace std;

ll dp[200000];

int main()
{

    ll t, k;
    cin>>t>>k;
    dp[1]=1;
    dp[0]=1;
    for(ll i=1;i<=100010;i++)
    {
        dp[i]=dp[i-1];
        if(i-k>=0) dp[i]=(dp[i]+dp[i-k])%md;
//        dbg(dp[i]);
    }
    for(ll i=2;i<=100010;i++)
    {
        dp[i]=(dp[i]+dp[i-1])%md;
    }
    dp[0]=0;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        cout<<(((dp[b]-dp[a-1])%md+md)%md)<<endl;
    }

    return 0;
}
