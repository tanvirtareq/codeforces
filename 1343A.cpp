#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    ll ar[100];
    ar[0]=0;

    for(ll i=1;i<=33;i++)
    {
        ar[i]=ar[i-1]+(1LL<<(i-1));
    }

    while(t--)
    {
        ll n;
        cin>>n;
        int f=0;
        for(ll i=2;i<=33;i++)
        {
            if(n%ar[i]==0)
            {
                cout<<n/ar[i]<<endl;
                break;
            }
        }
    }

    return 0;
}
