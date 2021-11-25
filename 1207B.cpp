    #include<bits/stdc++.h>
     
     
     
    #define v(a) vector<a>
    #define p(a, b) pair<a, b>
    #define pb push_back
    #define mk make_pair
    #define clr(a) memset(a, 0, sizeof a);
     
    using namespace std;
     
    typedef long long  ll;
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

      ll m, n;

      cin>>m>>n;

      ll ar[m+10][n+10];
      clr(ar);

      for(int i=1;i<=m;i++)
      {
        for(int j=1;j<=n;j++)
        {
          cin>>ar[i][j];
        }
      }

      vector<pair<ll, ll> > v;

      int f=0;
      for(int i=1;i<=m;i++)
      {
        for(int j=1;j<=n;j++)
        {
          if(ar[i][j]==1)
          {
              int ck=0;
              if(ar[i+1][j]==1 and ar[i][j+1]==1 and ar[i+1][j+1]==1)
              {
                  ck=1;
                  v.pb(mk(i, j));
              }

              if(ck==0)
              {
                  if(ar[i][j-1]==1 and ar[i+1][j]==1 and ar[i+1][j-1]==1)
                  {
                    ck=1;
                  }

                  if(ar[i-1][j-1]==1 and ar[i-1][j]==1 and ar[i][j-1]==1)
                    ck=1;

                  if(ar[i-1][j]==1 and ar[i-1][j+1]==1 and ar[i][j+1]==1)
                    ck =1;
              }

              if(ck==0)
              {
                // cout<<i<<j<<endl;
                f=1;
                break;
              }


          }
        }
      }

      if(f==1)
      {
        cout<<-1<<endl;
      }
      else 
      {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
          cout<<v[i].first<<" "<<v[i].second<<endl;
        }
      }


        return 0;
    }