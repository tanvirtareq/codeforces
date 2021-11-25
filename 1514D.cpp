#include <bits/stdc++.h>
#define ll long long
#define nl '\n'

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")


using namespace std;

vector<int> v;

#define MX 300000
int mp[MX + 10];
int id[MX + 10], ys[MX + 10];
int ct[400][MX + 1];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    int sq = sqrt((double)n);
    vector<int> hv;
    for (ll i = 0; i <= MX; i++)
    {
        if (mp[i] >= sq)
            hv.push_back(i);
    }
    for (ll i = 0; i < hv.size(); i++)
    {
        id[hv[i]] = i;
        ys[hv[i]] = 1;
    }
    if (ys[v[0]])
    {
        ct[id[v[0]]][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < hv.size(); j++)
        {
            ct[j][i] = ct[j][i - 1];
        }
        if (ys[v[i]])
        {
            ct[id[v[i]]][i]++;
        }
    }
    int tp = 3;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int szz = r - l + 1;
        if (szz < sq)
        {
            tp++;
            int mx = 1;
            for (int i = l; i <= r; i++)
            {
                if (ys[v[i]] == tp)
                {
                    mp[v[i]]++;
                    mx = max(mx, mp[v[i]]);
                    continue;
                }
                ys[v[i]] = tp;
                mp[v[i]] = 1;
            }

            int baki = szz - mx;
            mx -= baki;
            if (mx <= 0)
                cout << 1 << nl;
            else
                cout << mx << nl;
            continue;
        }
        int mx = 1;
        for (int i = 0; i < hv.size(); i++)
        {
            int ase = ct[i][r];
            if (l > 0)
                ase -= ct[i][l - 1];
            mx = max(mx, ase);
        }
        int baki = szz - mx;
        mx -= baki;
        if (mx <= 0)
            cout << 1 << nl;
        else
            cout << mx << nl;
    }

    return 0;
}