#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<"= "<<a<<endl
#define vl vector<ll>
#define pll pair<ll, ll>
#define fast ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
       ll n, m;
       cin>>n>>m;

       if(n>2)
       {
           cout<<m*2<<endl;

       }
       else if(n==2)
       {
           cout<<m<<endl;
       }
       else if(n==1)
       {
           cout<<0<<endl;
       }
    }


    return 0;
}
