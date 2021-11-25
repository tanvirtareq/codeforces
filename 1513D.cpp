/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-19 11:13:46 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-19 12:23:00
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, p;
    cin>>n>>p;
    ll a[n+3];
    set<pair<ll, ll> > st1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        st1.insert({a[i], i});
    }
    ll ans=0;
    ll baki=n-1;
    map<ll, ll> mp[2];
    mp[0][n]=1;
    mp[1][1]=1;
    for(auto it:st1)
    {
        ll r=it.second;
        if(a[r]>=p) break;
        if(baki<=0) break;
        if(mp[0][r]==0)
        {
            for(int j=r+1;j<=n;j++)
            {
                if(baki<=0) break;
                if(mp[1][j]==0 and a[j]>=a[r] and  a[j]%a[r]==0)
                {
                    mp[0][r]=1;
                    mp[1][j]=1;
                    mp[0][j-1]=1;
                    baki--;
                    ans+=a[r];
                }
                else break;
            }   
        }
        if(mp[1][r]==0)
        {
            for(int j=r-1;j>=1;j--)
            {
                if(baki<=0) break;
                if(mp[0][j]==0 and a[j]>=a[r] and a[j]%a[r]==0)
                {
                    mp[1][r]=1;
                    mp[0][j]=1;
                    mp[1][j+1]=1;
                    baki--;
                    ans+=a[r];
                }
                else break;
            }
        }
    }
    ans+=baki*p;
    cout<<ans<<endl;
    
    return;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}