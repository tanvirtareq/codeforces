#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    int cs=0;

    while(t--)
    {
        ll n;
        cin>>n;
        int f=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            ll y=sqrt((double)x);
            if(y*y!=x) f=1;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}