/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-30 10:42:41 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-30 11:03:31
 */
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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    ll mn = LLONG_MAX;
    ll x = 0;
    for (int i = 0; i < n; i++)
    {
        x += v[i] - 1;
    }
    mn=x;
    if (n >= 100)
    {

        cout << mn << endl;
        return 0;
    }

    for (ll c = 2;; c++)
    {
        ll x = 1;
        ll f = 0;
        ll ct = 0;
        for (ll i = 0; i < n; i++)
        {
            ct += abs(x - v[i]);
            x *= c;
            if (i < n - 1 and x > 1000000000000)
            {
                f = 1;
                break;
            }
        }
        if (f)
            break;
        mn = min(mn, ct);
        // cout << ct << endl;
    }
    cout << mn << endl;
    return 0;
}

int main()
{
    fast;
    solve();
    return 0;
}