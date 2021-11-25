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
const int mod = 998244353;
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
    ll n, k;
    cin>>n>>k;
    vll a(n), b(k);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    set<ll> st;
    for(auto it:b) st.insert(it);
    vll v[n+10];
    for(int i=0;i<n;i++)
    {
        if(i-1>=0)
        {
            v[a[i]].pb(a[i-1]);
        }
        if(i+1<n)
        {
            v[a[i]].pb(a[i+1]);
        }
    }
    ll ans=1;
    for(int i=0;i<k;i++)
    {
        st.erase(b[i]);
        // debug(v[b[i]].size());
        if(v[b[i]].size()==2)
        {
            // debug(v[b[i]][0], v[b[i]][1]);
            if(st.find(v[b[i]][0])==st.end() and st.find(v[b[i]][1])==st.end())
            ans=(ans*2)%mod;
            if(st.find(v[b[i]][0])!=st.end() and st.find(v[b[i]][1])!=st.end())
            {
                cout<<0<<nl;
                return;
            }
        }
        if(v[b[i]].size()==1 and st.find(v[b[i]][0])!=st.end())
        {
            cout<<0<<nl;
            return;
        }
    }
    cout<<ans<<nl;

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
