/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-25 09:25:23 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-25 09:34:52
 */

#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll v[n+2], a[n+1];
        for(int i=0;i<n;i++) cin>>v[i];
        ll x=0;
        // vector<ll> a[2];
        for(int i=0;i<n;i++)
        {
            if(2*v[i]==k)
            {
                a[i]=x;
                x=!x;
            }
            if(2*v[i]<k)
            {
                a[i]=0;
            }
            if(2*v[i]>k)
            {
                a[i]=1;
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}