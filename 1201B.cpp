#include<bits/stdc++.h>
#define sci(a) scanf("%d", &a)
#define f(i, a, b) for(ll i=a;i<=b;i++)
#define clr(a) memset(a, 0, sizeof a)

using namespace std;
typedef long long ll;

ll n;

int main()
{

   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt" , "w", stdout);
   #endif

   ios_base::sync_with_stdio(0);
   cin.tie(0);

    ll m;
    cin>>m;

    if(m==2)
    {
      int x, y;
      cin>>x>>y;
      if(x==y)
        cout<<"YES"<<endl;

      else cout<<"NO"<<endl;

      return 0;
    }
    ll ct=0;
    vector<int> v;
    for(ll i=1;i<=m;i++)
    {
      ll x;
      cin>>x;
      ct+=x;
      v.push_back(x);
    }


    if(ct&1) cout<<"NO"<<endl;

    else 
    {

          sort(v.begin(), v.end());

          if(v[v.size()-1]<=ct-v[v.size()-1]) cout<<"YES"<<endl;
          else  cout<<"NO"<<endl;
    }

    return 0;
}
