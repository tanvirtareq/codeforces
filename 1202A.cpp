#include<bits/stdc++.h>
#define sci(a) scanf("%d", &a)
#define f(i, a, b) for(ll i=a;i<=b;i++)
#define clr(a) memset(a, 0, sizeof a)
#define pb push_back
#define dbg cout<<"yes"<<endl;

using namespace std;
typedef long long ll;
typedef vector<ll> vi;


ll n;

int main()
{

   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt" , "w", stdout);
   #endif

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;

   while(n--)
   {
      string a, b;
      cin>>a>>b;
      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());

      int ct=0;

      for(int i=0;i<b.size();i++)
      {
          if(b[i]=='1')
          {
            ct=i;
            break;
          }
      }

      for(int i=0;i<a.size();i++)
      {
          if(a[i+ct]=='1')
          {
            cout<<i<<endl;
            break;
          }
      }
   }
   

    return 0;
}
