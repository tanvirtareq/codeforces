#include <bits/stdc++.h>
#define ll long long
#define nl '\n'

using namespace std;





int main()
{
    ll t;
    // cin>>t;
    scanf("%lld", &t);
    for (int cs = 1; cs <= t; cs++)
    {
        ll n,k;
        cin>>n>>k;
        ll ct=0;
        while(n)
        {
            if(n%k==0)
            {
                ct++;
                n/=k;
            }
            ct+=n%k;
            n-=n%k;
        }
        cout<<ct<<endl;
    }
    return 0;
}
