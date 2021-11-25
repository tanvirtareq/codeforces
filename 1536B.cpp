#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (char a = 'a'; a <= 'z'; a++)
    {
        int f = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (a == s[i])
                f = 1;
        }
        if (f == 0)
        {
            cout << a << endl;
            return;
        }
    }
    for (char a = 'a'; a <= 'z'; a++)
    {
        for (char b = 'a'; b <= 'z'; b++)
        {
            int f = 0;
            for (int i = 0; i + 1 < n; i++)
            {
                if (a == s[i] and b == s[i + 1])
                {
                    f = 1;
                }
            }
            if (f == 0)
            {
                cout << a << b << endl;
                return;
            }
        }
    }
    for (char a = 'a'; a <= 'z'; a++)
    {
        for (char b = 'a'; b <= 'z'; b++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                int f = 0;
                for (int i = 0; i + 2 < n; i++)
                {
                    if (a == s[i] and b == s[i + 1] and c == s[i + 2])
                    {
                        f = 1;
                    }
                }
                if (f == 0)
                {
                    cout << a << b << c << endl;
                    return;
                }
            }
        }
    }
    for (char a = 'a'; a <= 'z'; a++)
    {
        for (char b = 'a'; b <= 'z'; b++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                for (char d = 'a'; d <= 'z'; d++)
                {
                    int f = 0;
                    for (int i = 0; i + 3 < n; i++)
                    {
                        if (a == s[i] and b == s[i + 1] and c == s[i + 2] and d==s[i+3])
                        {
                            f = 1;
                        }
                    }
                    if (f == 0)
                    {
                        cout << a << b << c <<d<< endl;
                        return;
                    }
                }
            }
        }
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}