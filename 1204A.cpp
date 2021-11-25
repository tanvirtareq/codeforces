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

   string s;
   cin>>s;

   if(s.size()==0)
   {
        cout<<0<<endl;
   }
   else if(s.size()==1)
   {
        cout<<0<<endl;
   }

   else if((s.size()-1)%2==0)
   {
        int f=0;

        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                f=1;
                break;
            }

           
        }
         if(f==1)
            {
                cout<<(s.size()-1)/2+1<<endl;
            }
            else cout<<(s.size()-1)/2<<endl;
   }

   else
   {
        cout<<(s.size()-1)/2+1<<endl;
   }

	return 0;
}
