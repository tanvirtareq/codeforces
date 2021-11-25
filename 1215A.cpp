#include<bits/stdc++.h>




#define v(a) vector<a>
#define p(a, b) pair<a, b>
#define pb push_back
#define mk make_pair
#define clr(a) memset(a, 0, sizeof a)
#define dbg(a) cout<<#a<<"= "<<a<<endl;

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

   ll a1, a2, k1, k2, n;
   cin>>a1>>a2>>k1>>k2>>n;

   ll mn;
   ll ntp=n;
   // dbg(n);

   ll mx=0;

   if(k1>k2)
   {
   	// dbg(ntp);
   		mx=min(n/(k2), a2);
   		// dbg(mx);
   		n=n-mx*k2;

   		mx+=min(n/(k1), a1);

   		ntp=ntp-(k2-1)*a2;
   		// dbg(ntp);

   		ntp=ntp-(k1-1)*a1;
   		// dbg(ntp);

   		ntp<0? mn=0: mn=ntp;



   		// dbg(mx);
   }

   else 
   {
   		mx=min(n/k1, a1);
   		n=n-mx*k1;
   		mx+=min(n/k2, a2);

   		ntp=ntp-(k1-1)*a1;

   		ntp=ntp-(k2-1)*a2;

   		(ntp<0)? mn=0: mn=ntp;
   }

   cout<<mn<<" "<<mx<<endl;

 

	return 0;
}
