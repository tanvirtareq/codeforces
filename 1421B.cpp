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


void solve()
{
    ll n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    
    vpll v;
    if(s[0][1]==s[1][0])
    {
        if(s[0][1]=='1')
        {
            if(s[n-1][n-2]=='1') v.pb({n-1, n-2});
            if(s[n-2][n-1]=='1') v.pb({n-2, n-1});
        }
        else
        {
            if(s[n-1][n-2]=='0') v.pb({n-1, n-2});
            if(s[n-2][n-1]=='0') v.pb({n-2, n-1});
        }
        cout<<v.size()<<nl;
        for(auto it:v) cout<<it.first+1<<" "<<it.second+1<<nl;
        return;
        
    }

    if(s[n-1][n-2]==s[n-2][n-1])
    {
        if(s[n-1][n-2]=='1')
        {
            if(s[0][1]=='1') v.pb({0, 1});
            if(s[1][0]=='1') v.pb({1, 0});
        }
        else
        {
            if(s[0][1]=='0') v.pb({0, 1});
            if(s[1][0]=='0') v.pb({1, 0});
        }
        cout<<v.size()<<nl;
        for(auto it:v) cout<<it.first+1<<" "<<it.second+1<<nl;
        return;
        
    }

    if(s[0][1]=='1') v.pb({0, 1});
    if(s[1][0]=='1') v.pb({1, 0});
    if(s[n-1][n-2]=='0') v.pb({n-1, n-2});
    if(s[n-2][n-1]=='0') v.pb({n-2, n-1});

    
    cout<<v.size()<<nl;
    for(auto it:v) cout<<it.first+1<<" "<<it.second+1<<nl;

    // ll s0=0, s1=0, f0=0, f1=0;
    // if(s[0][1]=='1') s1++;
    // else s0++;
    // if(s[1][0]=='1') s1++;
    // else s0++;
    // if(s[n-1][n-2]=='1') f1++;
    // else f0++;
    // if(s[n-2][n-1]=='1') f1++;
    // else f0++;
    // if()

}

int main()
{
    BeatMeScanf;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}