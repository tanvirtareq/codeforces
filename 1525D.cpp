/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-25 13:51:38 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-25 14:29:12
 */
#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll a[5010], dl[5010][5010], dr[5010][5010];
void solve()
{
    ll n;
    cin>>n;
    
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        queue<ll> q;
        ll x=0;
        dl[i][i]=0;
        if(a[i]==1)
        {
            q.push(i);
            dl[i][i]=INT_MAX;
        }
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==1)
            {
                q.push(j);
                // dl[i][j]=INT_MAX;
            }
            else
            {
                if(q.size())
                {
                    x+=abs(q.front()-j);
                    q.pop();
                }
                    
                // dl[i][j]=x;
            }
            dl[i][j]=x;
            if(q.size()) dl[i][j]=INT_MAX;
            // cout<<dl[i][j]<<" ";
        }
        // cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
        queue<ll> q;
        ll x=0;
        dr[i][i]=0;
        if(a[i]==1)
        {
            dr[i][i]=INT_MAX;
            q.push(i);
        }
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]==1)
            {
                q.push(j);
                // dr[j][i]=INT_MAX;
            }
            else
            {
                if(q.size())
                {
                    x+=abs(q.front()-j);
                    q.pop();
                }
                // dr[j][i]=x;
            }
            dr[j][i]=x;
            if(q.size()) dr[j][i]=INT_MAX;
        }
    }
    ll xx[n];
    for(int i=0;i<n;i++)
    {
        xx[i]=min(dl[i][i], dr[i][i]);
        if(i>0) xx[i]+=xx[i-1];
        for(int j=i-1;j>=0;j--)
        {
            ll tmp=min(dl[j][i], dr[j][i]);
            if(j>0) tmp+=xx[j-1];
            xx[i]=min(xx[i], tmp);
            // cout<<"tmp "<<tmp<<endl;
        }
        // cout<<xx[i]<<endl;
    }
    cout<<xx[n-1]<<endl;

}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}