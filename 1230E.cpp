#include<bits/stdc++.h>


#define v(a) vector<a>
#define p(a, b) pair<a, b>
#define pb push_back
#define mk make_pair
#define clr(a) memset(a, 0, sizeof a)
#define dbg(a) cout<<#a<<"= "<<a<<endl;
#define md 1000000007

using namespace std;

typedef long long ll;
typedef long long unsigned lu;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef priority_queue<int> mxpqi;
typedef priority_queue<int, vector<int> , greater<int> > mnpqi;

ll val[100010];
map<ll, ll> mp[100010];
vector<ll> gp[100010];
ll ans, n;

ll gcd(ll a, ll y)
{
	if(a==0) return y;
	if(y==0) return a;
	return __gcd(a, y);
}

ll dfs(ll cur, ll pre)
{
	ans=(ans+val[cur])%md;
	mp[cur][val[cur]]=(mp[cur][val[cur]]+1)%md;

	map<ll, ll> ::iterator it;
	for(it=mp[pre].begin();it!=mp[pre].end();it++)
	{
		ll g=gcd(it->first, val[cur]);
		mp[cur][g]=(mp[cur][g]+it->second)%md;
		ans=(ans+(g*it->second)%md)%md;
	}

	for(ll i=0;i<gp[cur].size();i++) 
		if(pre!=gp[cur][i]) dfs(gp[cur][i], cur);

	return 0;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   cin>>n;

   for(ll i=1;i<=n;i++) cin>>val[i];

   	for(ll i=1;i<n;i++)
   	{
   		ll x, y;
   		cin>>x>>y;
   		gp[x].push_back(y);
   		gp[y].push_back(x);
   	}
   	dfs(1, 0);
   	cout<<ans<<endl;


	return 0;
}
