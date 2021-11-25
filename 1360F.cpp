#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define inf 100000000000000
using namespace std;

int n, m;
string s[50];
int chk(string ans)
{
    for(int i=0;i<n;i++)
    {
        int ct=0;
        for(int j=0;j<m;j++)
        {
            if(ans[j]!=s[i][j]) ct++;
        }
        if(ct>1) return 0;
    }
    return 1;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            cin>>s[i-1];
        int f=0;
        vector<pair<int, int> > v;
        for(int i=1;i<n;i++)
        {
            int ct=0;
            vector<pair<int, int > > v1;
            for(int j=0;j<m;j++)
            {
                if(s[0][j]!=s[i][j])
                {
                    ct++;
                    pair<int, int> pi;
                    pi.first=j;
                    pi.second=i;
                    v1.push_back({j , i});
                }
            }
            if(ct>2)
            {
                f=1;
                break;
            }
            for(auto it: v1) v.push_back(it);
        }
        if(f==1)
        {
            cout<<-1<<endl;
            continue;
        }
        int fl=0;
        string ans=s[0];
        if(chk(ans))
        {
            cout<<ans<<endl;
            continue;
        }
        for(auto it: v)
        {
            ans[it.first]=s[it.second][it.first];
            if(chk(ans))
            {
                fl=1;
                break;
            }
            ans[it.first]=s[0][it.first];
        }
        if(fl==0)
        {
            cout<<-1<<endl;
        }
        else cout<<ans<<endl;

    }

    return 0;
}



