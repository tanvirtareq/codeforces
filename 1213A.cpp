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

   int n;
   cin>>n;

   map<int, int> mp;

   vector<int> v;

   for(int i=1;i<=n;i++)
   {
        int x;
        cin>>x;
        if(mp[x]==0) v.push_back(x);

        mp[x]++;

   }

   sort(v.begin(), v.end());

   int val=INT_MAX;

   for(int i=0;i<v.size();i++)
   {
    // cout<<v[i];
        int x=0;
        for(int j=0;j<v.size();j++)
        {
            // cout<<v[j]<<endl;
            if((v[i]+v[j])%2==1) x+=mp[v[j]];
            // cout<<x<<endl;
        }

        val=min(x, val);
   }

   cout<<val<<endl;



	return 0;
}
