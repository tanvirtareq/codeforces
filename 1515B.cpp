#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n%2)
    {
        cout << "NO" << endl;
        return;
    }
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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