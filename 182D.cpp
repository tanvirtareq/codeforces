#include <bits/stdc++.h>

using namespace std;

string s,t;

bool ck(string &a, int k)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i%k]!=a[i]) return 0;
    }
    return 1;
}

int main()
{
  cin >> s >> t;
  int m=0;
  for(int i=0;i<min(s.size(), t.size());i++)
  {
      if(s[i]!=t[i])
      {
          break;
      }
      m++;
  }
  int cn=0;
  for(int i=1;i<=m;i++)
  {
      if(s.size()%i==0 and t.size()%i==0 and ck(s, i) and ck(t, i)) cn++;
//      cout<<cn<<endl;
  }
  cout<<cn;
}

