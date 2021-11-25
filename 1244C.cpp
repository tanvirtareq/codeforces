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


int main()
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   ll n, p, w, d;

   ll x, y, z;

   // cin>>n>>p>>w>>d;
   scanf("%lld%lld%lld%lld", &n, &p, &w, &d);

   ll g=__gcd(w, d);
   if(p%g) return puts("-1"), 0;

  y=0;
  while((p-y*d)%w and (p-y*d)>0 ) y++;
  if((p-y*d)<0 and (p-y*d)!=0) return puts("-1"), 0;

  x=(p-y*d)/w;

  z=n-x-y;

  if(x>=0 and y>=0 and z>=0) printf("%lld %lld %lld\n", x, y, z);
  else printf("-1\n");

	return 0;
}
