#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<" "<<a<<endl
#define ii pair<int, int>
#define vl vector<ll>

using namespace std;

void solve()
{
    ll n;
    cin>>n;
    // dbg(n);
    vl v(n);
    ll xx=0;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v[i]=x;
        if(x!=1 and xx==0) xx=i+1; 
        // dbg(xx);
        // dbg(x);
    }

    if(xx==0)
    {
        if(n%2==0)
        {
            cout<<"Second"<<endl;
        }
        else cout<<"First"<<endl;
    }
    else
    {
        // dbg(xx);
        if(xx%2==0)
        {
            cout<<"Second"<<endl;
        }
        else cout<<"First"<<endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    cin>>t;
    while(t--)
        solve();

    return 0;
}





