//#pragma GCC optimize("Ofast")
//#pragma GCC
// target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
//     using namespace __gnu_pbds;
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
#define mt make_tuple
#define fbo find_by_order
#define ook order_of_key
#define MP make_pair
#define UB upper_bound
#define LB lower_bound
#define SQ(x) ((x) * (x))
#define issq(x) (((ll)(sqrt((x)))) * ((ll)(sqrt((x)))) == (x))
#define F first
#define S second
#define mem(a, x) memset(a, x, sizeof(a))
#define inf 1e18
#define E 2.71828182845904523536
#define gamma 0.5772156649
#define nl "\n"
#define lg(r, n) (int)(log2(n) / log2(r))
#define pf printf
#define sf scanf
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define pf1(a) printf("%d\n", a);
#define pf2(a, b) printf("%d %d\n", a, b)
#define pf3(a, b, c) printf("%d %d %d\n", a, b, c)
#define sf1ll(a) scanf("%lld", &a)
#define sf2ll(a, b) scanf("%I64d %I64d", &a, &b)
#define sf3ll(a, b, c) scanf("%I64d %I64d %I64d", &a, &b, &c)
#define pf1ll(a) printf("%lld\n", a);
#define pf2ll(a, b) printf("%I64d %I64d\n", a, b)
#define pf3ll(a, b, c) printf("%I64d %I64d %I64d\n", a, b, c)
#define by(x) [](const auto &a, const auto &b) { return a.x < b.x; }
#define asche cerr << "Ekhane asche\n";
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define grtsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define toint(a) atoi(a.c_str())
#define BeatMeScanf ios_base::sync_with_stdio(false)
#define valid(tx, ty) (tx >= 0 && tx < n && ty >= 0 && ty < m)
#define one(x) __builtin_popcount(x)
#define Unique(v) v.erase(unique(all(v)), v.end())
#define stree l = (n << 1), r = l + 1, mid = b + (e - b) / 2
#define fout(x) fixed << setprecision(x)

string tostr(int n)
{
    stringstream rr;
    rr << n;
    return rr.str();
}
// template <typename T>
// using o_set = tree<T, null_type, less<T>,
//                    rb_tree_tag, tree_order_statistics_node_update>;
//ll dx[]={1,0,-1,0,1,-1,-1,1};
//ll dy[]={0,1,0,-1,1,1,-1,-1};
//random_device rd;
//mt19937 random(rd());
int sc()
{
    register int c = getchar();
    register int x = 0;
    int neg = 0;
    for (; ((c < 48 || c > 57) && c != '-'); c = getchar())
        ;
    if (c == '-')
    {
        neg = 1;
        c = getchar();
    }
    for (; c > 47 && c < 58; c = getchar())
    {
        x = (x << 1) + (x << 3) + c - 48;
    }
    if (neg)
        x = -x;
    return x;
}
inline void out(int n)
{
    int N = n < 0 ? -n : n, rev, cnt = 0;
    rev = N;
    if (N == 0)
    {
        putchar('0');
        putchar('\n');
        return;
    }
    while ((rev % 10) == 0)
    {
        cnt++;
        rev /= 10;
    }
    if (n < 0)
        putchar('-');
    rev = 0;
    while (N != 0)
    {
        rev = (rev << 3) + (rev << 1) + N % 10;
        N /= 10;
    }
    while (rev != 0)
    {
        putchar(rev % 10 + '0');
        rev /= 10;
    }
    while (cnt--)
        putchar('0');
    putchar('\n');
    return;
}
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
    cerr << *it << " = " << a << endl;
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

void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    for (auto &it : v)
        cin >> it;
    if (n <= 2)
    {
        cout << 0 << endl;

        for (auto it : v)
            cout << it << " ";

        cout << endl;
        return;
    }
    srt(v);
    vll an(n);
    for (int i = 0; i < n; i += 2)
    {
        an[i] = v.back();
        v.pop_back();
    }
    vll tmp;
    while (v.size())
    {
        if (an[0] > v.back() and an[2] > v.back())
            break;
        tmp.push_back(v.back());
        v.pop_back();
    }
    for (int i = 1; i < n; i += 2)
    {
        if(v.size()==0) break;
        an[i] = v.back();
        v.pop_back();
    }
    for (int i = 0; i < n; i++)
    {
        if (an[i] == 0)
        {
            an[i] = tmp.back();
            tmp.pop_back();
        }
    }
    ll ct = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (an[i - 1] > an[i] and an[i + 1] > an[i])
            ct++;
    }
    cout << ct << endl;
    for (auto it : an)
        cout << it << " ";

    cout << endl;
}

int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}
