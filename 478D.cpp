#include<bits/stdc++.h>
#define ll int
#define md 1000000007
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int dp[300000];
int main()
{
    fast;
    ll r, g;
    cin>>r>>g;
    if(r==0 || g==0)
    {
        cout<<1<<endl;
        return 0;
    }
    ll n=r+g;
    ll x=n;
    ll h=0;
    while(h<=x)
    {
        x-=h;
        h++;
    }
    h--;
    ll baki=x;

    for(int i=x;i>=0;i--) dp[i]=1;

    for(int i=h;i>=1;i--)
    {
        for(int j=r;j>=0;j--)
        {
            if(j-i>=0)
                dp[j]=dp[j]+dp[j-i];
            if(dp[j]>=md) dp[j]-=md;
        }
    }
    cout<<dp[r]<<endl;

    return 0;
}

