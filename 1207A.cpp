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

       ll t;

       cin>>t;

       while(t--)
       {
          ll b, p, f, h, c;

          cin>>b>>p>>f>>h>>c;

          if(h>c)
          {
              int k=min(p, b/2);

              ll prf=k*h+c*min((b-2*k)/2, f);

              cout<<prf<<endl;



          }
          else 
          {
              int k=min(f, b/2);
              ll prf=k*c+h*min((b-2*k)/2, p);

              cout<<prf<<endl;

          }
       }
     
     
        return 0;
    }