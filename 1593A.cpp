#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define FAST ios_base::sync_with_stdio(false)
#define FASTtie ios_base::sync_with_stdio(false), cout.tie(0), cin.tie(0)
#define PI 2*acos(0.0)
#define E 2.718281828
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>
#define pis pair<int, string>
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define F first
#define S second
#define add(v) accumulate(v.begin(), v.end(), 0)
#define srt(v) sort(v.begin(), v.end())
#define loop(i, n) for(int i=0; i<=n; i++)
#define pqa_i priority_queue<int, vector<int>, greater<int> >
#define pqa_pii priority_queue<pii, vector<pii>, greater<pii> >
#define mp make_pair
#define endl "\n"
#define pf printf
#define sf(t) scanf("%d", &t)
#define memvis memset(visited, 0, M*sizeof(bool))
#define memvisg memset(visited, 0, sizeof visited)
#define memlev memset(level, -1, M*sizeof(int))
#define memprev memset(previous, -1, M*sizeof(int))
#define memlevg memset(level, -1, sizeof level)
#define mempro memset(process, -1, M*sizeof(int))
#define mempar memset(parent, -1, M*sizeof(int))
#define inf 1e18
#define nai string::npos
#define elif else if
#define ins insert
#define all(v) v.begin(), v.end()
#define debug(x) cout << #x << " = " << x << endl
#define ordered_set_int tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set_str tree<string, null_type,less<string>, rb_tree_tag,tree_order_statistics_node_update>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
void printarr(double *arr, int f, int n, int base){
    for(int i = base+f; i < n+base; i++) cout << arr[i] << "\n";
    cout << endl;
}
 
const int M = 1e6+7;
const int Mx = 1e8+10;
 
/*multiset<int> adj[M];
int dx[] = {1, -1, 0, 0}; /// [Move in
int dy[] = {0, 0, 1, -1}; /// x and y axis]
int kx[] = {2, 2, -2, -2, 1, -1, 1, -1}; /// {Knight
int ky[] = {1, -1, 1, -1, 2, 2, -2, -2}; /// move}
bool grid[17][17];
int level[M];
int previous[M];
bool visited[M];
int row=8, col=8;
int process[M]; /// -1 -> not processed yet; 0 -> processing; 1 -> processed (DFS)
int parent[M];  /// (DFS)
map<pii, int> weight; ///(Dijkstra)
vector<ll> dist(M, inf);
*/
ll binpow(ll base, ll exp){ll res = 1;while(1){ if(exp&1) res*=base;exp>>=1;if(!exp)break;base*=base;}return res;}
/*ll bigmod(ll a, ll b, ll Md)
{
    if(b == 0) return 1%Md;
    ll x = bigmod(a, b/2, Md);
    x = ((x%Md)*(x%Md))%Md;
    if(b&1) x = ((x%Md)*(a%Md))%Md;
    return x;
}*/
 
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for(int cs=1; cs<=t; cs++){
        int a, b, c;
        cin >> a  >> b >> c;


        int max_vote = max(a, max(b, c)), tie=0;
        int req_vote = max_vote+1;


        if(a == max_vote) tie++;
        if(b == max_vote) tie++;
        if(c == max_vote) tie++;

        if(tie > 1) cout << req_vote-a << " " << req_vote-b << " " << req_vote-c << endl;
        else cout << req_vote-a - (max_vote == a) << " " << req_vote-b-(max_vote == b) << " " << req_vote-c-(max_vote == c) << endl;

    }
 
    return 0;
}