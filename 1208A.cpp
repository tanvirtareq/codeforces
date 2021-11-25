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


   ll t;

   cin>>t;

   while(t--)
   {
   		ll a, b, n;
   		cin>>a>>b>>n;

   		if(n%3==0)
   		{
   			cout<<a<<endl;
   		}
   		else if(n%3==1)
   		{
   			cout<<b<<endl;
   		}

   		else if(n%3==2)
   		{
   			cout<<(a^b)<<endl;
   		}

   }



	return 0;
}
