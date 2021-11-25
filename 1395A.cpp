#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define md 1000000007

using namespace std;

int solve()
{
    vector<long long> v(3);
    ll w;
    cin >> v[0] >> v[1] >> v[2] >> w;
    ll ct = 0;
    int ct2 = 0;
    if (w % 2)
        ct2++;
    if (v[0] % 2)
        ct2++;
    if (v[1] % 2)
        ct2++;
    if (v[2] % 2)
        ct2++;

    // if(ct2==2)
    // {
    //     cout<<"NO"<<endl;
    // }
    // else cout<<"YES"<<endl;

    sort(v.begin(), v.end());

    if (v[0] > 0)
    {
        if(ct2==2)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    else
    {
        if(ct2<=1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    

    // w+=3*v[0];
    // v[1]-=v[0];
    // v[2]-=v[0];
    // int ct=0;
    // if(w%2) ct++;
    // if(v[1]%2) ct++;
    // if(v[2]%2) ct++;
    // if(ct<=1 || ct2<=1)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else cout<<"NO"<<endl;

    return 0;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}