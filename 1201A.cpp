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

   int m, n;

   cin>>m>>n;

   int ar[10010][7];

   clr(ar);
   // cout<<ar[1][2]<<endl;

   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
      {
          char x;
          cin>>x;
          // cout<<x<<endl;
          ar[j][x-'A']++;
          // cout<<ar[j][x-'A']<<endl;
      }
   }

   int ct=0;

   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;

     int mx=0;
     for(int j=0;j<5;j++)
     {
        mx=max(mx, ar[i][j]);
     }
     ct+=x*mx;


   }

   cout<<ct<<endl;


    return 0;
}
