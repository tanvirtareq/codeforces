/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-25 06:53:41 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-25 07:57:00
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll ck(ll a[], ll id, ll n)
{
    ll x=0;
    for(int i=max(2LL, id-1);i<=min(n-1, id+1);i++)
    {
        if(a[i]>a[i-1] and a[i]>a[i+1]) x++;
        if(a[i]<a[i-1] and a[i]<a[i+1]) x++;
    }
    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        if(n<=2)
        {
            cout<<0<<endl;
            continue;
        }
        ll mn=INT_MAX;
        ll tt=0;
        ll dp[n+2];
        dp[1]=dp[n]=0;
        dp[0]=dp[n+1]=0;
        for(int i=2;i<n;i++)
        {
            dp[i]=0;
            if(a[i]>a[i-1] and a[i]>a[i+1])
            {
                tt++;
                dp[i]=1;
            }
            if(a[i]<a[i-1] and a[i]<a[i+1])
            {
                tt++;
                dp[i]=1;
            }
        }
        // cout<<tt<<endl;
        for(int i=1;i<=n;i++)
        {
            ll x=dp[i-1]+dp[i+1]+dp[i];
            ll y=INT_MAX;
            ll tmp=a[i];
            if(i-1>=1) 
            {
                a[i]=a[i-1];
                y=min(y, ck(a, i, n));
                a[i]=a[i-1]+10000;
                y=min(y, ck(a, i, n));
                a[i]=a[i-1]-10000;
                y=min(y, ck(a, i, n));
            }
            if(i+1<=n) 
            {
                a[i]=a[i+1];
                y=min(y, ck(a, i, n));
                // cout<<x<<" "<<y<<endl;
                a[i]=a[i+1]+10000;
                y=min(y, ck(a, i, n));
                a[i]=a[i+1]-10000;
                y=min(y, ck(a, i, n));
            }
            // a[i]=INT_MAX;
            // y=min(y, ck(a,n , i))
            a[i]=tmp;
            mn=min(mn, tt-(x-y));
            // cout<<mn<<endl;
        }
        cout<<mn<<endl;
    }
    return 0;
}