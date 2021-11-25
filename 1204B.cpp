#include<bits/stdc++.h>




#define v(a) vector<a>
#define p(a, b) pair<a, b>
#define pb push_back
#define mk make_pair
#define clr(a) memset(a, 0, sizeof a)

using namespace std;

typedef long long ll;
typedef long long unsigned lu;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef priority_queue<int> mxpqi;
typedef priority_queue<int, vector<int> , greater<int> > mnpqi;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   int n, l , r;

   cin>>n>>l>>r;

   int mn=0, mx=0;

   for(int i=0;i<l;i++)
   {
      mn+=1<<i;
   }

   // mx=mn;

   mn+=n-l;

   int mxx=0;

   for(int i=0;i<r;i++)
   {
      mx+=1<<i;

      mxx=max(mxx, 1<<i);
   }

   mx+=(n-r)*mxx;
   cout<<mn<<" "<<mx<<endl;




	return 0;
}
