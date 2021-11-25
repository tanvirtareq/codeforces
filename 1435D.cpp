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
const ll mod = 1e9 + 7;
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

vll g[300000];
ll ch[300000], cnt[300000];

void dfs(ll r, ll p)
{
    ch[r]=1;
    ll mx=0;
    for(auto it:g[r])
    {
        if(it==p) continue;
        dfs(it, r);
        ch[r]+=ch[it];
        mx=max(mx, cnt[it]);
    }
    for(auto it:g[r])
    {
        ll dibo=min(mx, cnt[r]);
        cnt[it]+=dibo;
        cnt[r]-=dibo;
    }
    ll dibo=cnt[r]/g[r].size();
    ll beshidibo=cnt[r]%g[r].size();

}

void solve()
{
    ll n;
    cin>>n;
    cin.ignore();
    vs qr(2*n);
    for(auto &it:qr) getline(cin, it);
    vll v(n);
    stack<ll> stk;
    ll pos=-1;
    for(auto it:qr)
    {
        // debug(it);
        stringstream s(it);
        char c;
        s>>c;
        // debug(c);
        if(c=='+') stk.push(++pos);
        else
        {
            ll y;
            s>>y;
            if(stk.size()==0)
            {
                cout<<"NO"<<nl;
                return;
            }
            v[stk.top()]=y;
            stk.pop();
        }
        
    }
    // printv(v);
    set<ll> st;
    pos=-1;
    for(auto it:qr)
    {
        stringstream s(it);
        char c;
        s>>c;
        if(c=='+') st.insert(v[++pos]);
        else
        {
            ll y;
            s>>y;
            if(y!=(*st.begin()))
            {
                cout<<"NO"<<nl;
                return;
            }
            st.erase(st.begin());
        }
        

    }
    cout<<"YES"<<nl;
    for(auto it:v) cout<<it<<" ";
    cout<<nl;
}
int main()
{
    BeatMeScanf;
        solve();
    return 0;
}
