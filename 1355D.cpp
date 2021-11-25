#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
using namespace std;


int main()
{
    fast;
    ll n,s;

    cin>>n>>s;
    vector<ll>v(n, 1);
    ll ses=n-1;
    ll baki=s-ses;
    v[n-1]=baki;
    if(ses+1<baki)
    {
        cout<<"YES"<<endl;
        for(auto it:v) cout<<it<<" ";
        cout<<endl<<ses+1<<endl;
    }
    else cout<<"NO"<<endl;



    return 0;
}



