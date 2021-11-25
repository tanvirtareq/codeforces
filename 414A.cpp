
#include<bits/stdc++.h>
#define MX 100010
#define dbg(a) cout<<#a<<"="<<a<<endl
#define md 1000000007
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    if(n==1 and k==0)
    {
        cout<<1<<endl;
        return 0;
    }
    ll x=n/2;
    k-=x;
    if(k<0 || n<2)
    {
        cout<<-1;
        return 0;
    }
    k++;
    v[0]=k;
    v[1]=2*k;
    int ct=1;
    for(int i=2;i<n-1;i+=2)
    {
        if(ct!=k and ct!=2*k and ct+1!=k and ct+1!=2*k)
        {
            v[i]=ct;
            ct++;
            v[i+1]=ct;
            ct++;
        }
        else
        {
            ct++;
            i-=2;
        }
    }
    if(n%2) v[n-1]=1000000000;
    for(auto it:v)cout<<it<<" ";
    return 0;
}

