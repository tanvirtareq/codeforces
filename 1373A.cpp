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
        ll a, b, c;
        cin>>a>>b>>c;
        if(a<c)
        {
            cout<<1<<" ";
        }
        else cout<<-1<<" ";
        if(c<a*b)
        {
            cout<<b<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
