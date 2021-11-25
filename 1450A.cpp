#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpll vector<pll>
#define vpii vector<pii>
#define umap unordered_map
#define uset unordered_set
#define PQ priority_queue
#define printa(a, L, R)         \
    for (int i = L; i < R; i++) \
    cout << a[i] << (i == R - 1 ? '\n' : ' ')
#define printv(a) printa(a, 0, a.size())
#define print2d(a, r, c)            \
    for (int i = 0; i < r; i++)     \
        for (int j = 0; j < c; j++) \
    cout << a[i][j] << (j == c - 1 ? '\n' : ' ')
#define pb push_back
#define eb emplace_back
#define UB upper_bound
#define LB lower_bound
#define F first
#define S second
#define mem(a, x) memset(a, x, sizeof(a))
#define inf 1e18
#define E 2.71828182845904523536
#define gamma 0.5772156649
#define nl "\n"
#define lg(r, n) (int)(log2(n) / log2(r))
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define grtsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define toint(a) atoi(a.c_str())
#define BeatMeScanf ios_base::sync_with_stdio(false)
#define one(x) __builtin_popcount(x)
#define Unique(v) v.erase(unique(all(v)), v.end())
#define fout(x) fixed << setprecision(x)
#define debug(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        deb(_it, args);                          \
    }
void deb(istream_iterator<string> it)
{
}
template <typename T, typename... Args>
void deb(istream_iterator<string> it, T a, Args... args)
{
    cout << *it << " = " << a << endl;
    deb(++it, args...);
}
const int mod = 1e9 + 7;
const int N = 3e5 + 9;
const ld eps = 1e-9;
const ld PI = acos(-1.0);
ll gc(ll a, ll b)
{
    while (b)
    {
        ll x = a % b;
        a = b;
        b = x;
    }
    return a;
}
ll lc(ll a, ll b) { return a / gc(a, b) * b; }
ll qpow(ll n, ll k)
{
    ll ans = 1;
    assert(k >= 0);
    n %= mod;
    while (k > 0)
    {
        if (k & 1)
            ans = (ans * n) % mod;
        n = (n * n) % mod;
        k >>= 1;
    }
    return ans % mod;
}

ll n;
vs s;

ll cc(char c)
{
    vll r1(n), r2(n), c1(n), c2(n);
    r1.assign(n, n + 10);
    c1.assign(n, n + 10);
    r2.assign(n, -1);
    c2.assign(n, -1);
    ll mxr = -1;
    ll mnr = n + 10;
    ll mxc = -1;
    ll mnc = n + 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == c)
            {
                r1[i] = min(r1[i], (ll)j);
                r2[i] = max(r2[i], (ll)j);
                c1[j] = min(c1[j], (ll)i);
                c2[j] = max(c2[j], (ll)i);
            }
            mxr = max(mxr, c2[j]);
            mnr = min(mnr, c1[j]);
            mxc = max(mxc, r2[i]);
            mnc = min(mnc, r1[i]);
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (r1[i] != n + 10 && r2[i] != -1 and mxr != -1 and mnr != n + 10)
            {
                ll xx = max(abs(r1[i] - j), abs(r2[i] - j));
                ll y = max(abs(mxr - i), abs(mnr - i));
                ans = max(ans, xx * y);
                // debug(ans, i,j, xx, y);
            }

            if (c1[j] != n + 10 && c2[j] != -1 and mxc != -1 and mnc != n + 10)
            {
                ll yy = max(abs(c1[j] - i), abs(c2[j] - i));
                ll x = max(abs(mxc - j), abs(mnc - j));
                ans = max(ans, x * yy);
                // debug(ans, i,j, x, yy, c1[j],c2[j]);
            }
        }
    }
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    srt(s);
    cout<<s<<nl;

}

int main()
{
    BeatMeScanf;
    int t = 1;
    cin >> t;
    int cs = 0;
    while (t--)
    {
        // cout<<"Case "<<++cs<<": ";
        solve();
    }
    return 0;
}
