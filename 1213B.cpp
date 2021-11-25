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
    ll n;
    cin>>n;

    vector<int> v;
    while(n--)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }

    int mn=v[v.size()-1];
    int ct=0;

    for(int i=v.size()-2;i>=0;i--)
    {
      if(v[i]>mn)
      {
        ct++;
      }

      mn=min(mn, v[i]);
    }


    cout<<ct<<endl;
  }

	return 0;
}
