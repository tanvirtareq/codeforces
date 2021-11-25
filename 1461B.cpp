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

// template <typename T>
// using o_set = tree<T, null_type, less<T>,
//                    rb_tree_tag, tree_order_statistics_node_update>;

//random_device rd;
//mt19937 random(rd());

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
    ll n, m;
    cin>>n>>m;
    vs s(n);
    for(auto &it:s) cin>>it;
    ll dpl[n+10][m+10], dpr[n+10][m+10];
    for(int i=0;i<n;i++)
    {
        dpl[i][0]=dpr[i][m-1]=0;
        if(s[i][0]=='*') dpl[i][0]++;
        if(s[i][m-1]=='*') dpr[i][m-1]++;
        for(int j=1;j<m;j++)
        {
            dpl[i][j]=dpl[i][j-1]+1;
            if(s[i][j]=='.') dpl[i][j]=0;
        }
        for(int j=m-2;j>=0;j--)
        {
            dpr[i][j]=dpr[i][j+1]+1;
            if(s[i][j]=='.') dpr[i][j]=0;
        }
    }
    ll dpu[n+10][m+10];
    ll ans=0;
    for(int j=0;j<m;j++)
    {
        dpu[0][j]=0;
        if(s[0][j]=='*') dpu[0][j]=1;
        ans+=dpu[0][j];
        for(int i=1;i<n;i++)
        {
            dpu[i][j]=min(dpu[i-1][j]+1, min(dpl[i][j], dpr[i][j]));
            if(s[i][j]=='.') dpu[i][j]=0;
            ans+=dpu[i][j];
            // debug(i, j, dpu[i][j], dpl[i][j], dpr[i][j]);
        }
    }
    cout<<ans<<nl;
}

int main()
{
    BeatMeScanf;
    ll t;
    cin>>t;

    int cs=0;
    while(t--){
        // cout<<"Case "<<++cs<<": ";
        solve();
    }
    return 0;
}
