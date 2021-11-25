/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-25 06:38:13 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-25 06:50:52
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
        ll x=(k+1)/2;
        // x++;
        cout<<n-x<<endl;
        for(int i=x;i<=n;i++)
        {
            if(i==k) continue;
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}