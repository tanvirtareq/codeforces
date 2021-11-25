#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[10000];
void solve()
{
    
    ll n;
    cin>>n;
    if(n<1000)
    {
        if(dp[n])
        {
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
        return;
    }
    if(n%2)
    {
        cout<<"Bob"<<endl;
    }
    else 
    {
        ll ct=0;
        while(n%2==0)
        {
            ct++;
            n/=2;
        }
        if(n==1 and ct%2)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }

}

int main()
{
    memset(dp, 0, sizeof(dp));
    dp[1]=0;
    dp[2]=0;
    for(ll i=3;i<=1000;i++)
    {
        for(ll j=2;j*j<=i;j++)
        {
            if(i%j) continue;
            // if(i==5)
            // {
            //     cout<<" ad"<<endl;
            // }
            ll x=j;
            if(dp[i-x]==0)
            {
                dp[i]=1;
                break;
            }
            x=i/j;
            if(dp[i-x]==0)
            {
                dp[i]=1;
                break;
            }
        }
    }
    // for(int i=1;i<=1000;i++)
    // {
    //     cout<<dp[i]<<endl;
    //     // if(dp[i]==i%2)
    //     // {
    //     //     cout<<i<<endl;
    //     // }
    // }
    // exit(0);
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}