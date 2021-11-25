/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-28 05:45:32 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-28 06:05:11
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{   
    ll d, k;
    cin>>d>>k;
    double x=(double)(d*d)/(2.0*k*k);
    x=sqrt(x);
    ll a=floor(x);
    // ll b=ceil(x);
    double y=(double)(d*d)/(double)(k*k)-(double)(a*a);
    y=sqrt(y);
    ll b=floor(y);
    // cout<<a<<" "<<b<<endl;
    if((a+b)%2)
    {
        cout<<"Ashish"<<endl;
    }
    else cout<<"Utkarsh"<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        
        solve();
    }
    return 0;
}