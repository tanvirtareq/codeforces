#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n%2==1)
    {
        cout<<"3 1 2 ";
        for(int i=4;i<=n;i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=1;i<=n;i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }

}

int main()
{

    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}