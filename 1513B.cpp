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

ll fct[200010];

void solve()
{   
    ll n;
    cin>>n;
    vll v(n), ar(n),al(n);
    map<ll, ll> mp, vis;
    for(auto &it:v) cin>>it, mp[it]++;
    
    al[0]=v[0];
    for(int i=1;i<n;i++)
    {
        al[i]=al[i-1]&v[i];
    }
    ar[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        ar[i]=ar[i+1]&v[i];
    }
    ll as=0;
    for(int i=0;i<n;i++)
    {
        if(vis[v[i]]) continue;
        vis[v[i]]=1;
        if(i==0)
        {
            if(v[i]==ar[i+1])
            {
                as=(as+((mp[v[i]]*(mp[v[i]]-1))%mod)*fct[n-2])%mod;
            }
        }
        else if(i==n-1)
        {
            if(v[i]==al[i-1])
            {
               as=(as+((mp[v[i]]*(mp[v[i]]-1))%mod)*fct[n-2])%mod;
            }
        }
        else
        {
            if(v[i]==(al[i-1]&ar[i+1]))
            {
                as=(as+((mp[v[i]]*(mp[v[i]]-1))%mod)*fct[n-2])%mod;
            }
        }
    }
    cout<<as<<endl;


}

int main()
{
    BeatMeScanf;
    ll t = 1;
    cin >> t;
    fct[0]=1;
    for(ll i=1;i<=200000;i++)
    {
        fct[i]=(fct[i-1]*i)%mod;
    }

    int cs = 0;
    while (t--)
    {
        solve();
    }
    return 0;
}