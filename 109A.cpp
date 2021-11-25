#include<bits/stdc++.h>
#define ll long long
#define md 1000000007
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    for(ll i=0;i<=n;i++)
    {
        ll y=(n-4*i)/7;
        if(y<0) continue;
        if(i*4+7*y==n)
        {
            for(int j=1;j<=i;j++) cout<<4;
            for(int j=1;j<=y;j++) cout<<7;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}




