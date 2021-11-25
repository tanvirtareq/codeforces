#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string mn;
    for (int i = 0; i < k; i++)
    {
        mn.push_back(s[i % n]);
    }
    while (--n)
    {
        string x;
        for (int i = 0; i < k; i++)
        {
            x.push_back(s[i % n]);
        }
        mn=min(mn, x);
    }
    cout<<mn<<endl;
}

int main()
{

    int t = 1;
    // cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}