/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-17 20:05:57 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-17 20:44:25
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << 0 << endl;
        return;
    }
    ll x = (n - 1) / 2;
    ll y = n - 1;
    ll z = y - (y / 2) * 2;
    for (int i = 1; i <= n; i++)
    {
        ll tx = x;
        ll tz = z;
        for (int j = 1; j <= y; j++)
        {
            if (tx)
            {
                cout << 1 << " ";
                tx--;
            }
            else if (tz)
            {
                cout << 0 << " ";
                tz--;
            }
            else
                cout << -1 << " ";
        }
        y--;
    }

    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {

        solve();
    }
    return 0;
}