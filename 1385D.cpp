#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;

int dpt[131075][18][27];
vi v;
int n;
int ttln;
int dpf(int pos, int len, int x)
{
    if(len==0)
    {
        if(v[pos]==x) return 0;
        else return 1;
    }

    int &rt=dpt[pos][len][x];
    if(rt!=-1) return rt;

    int a=0, b=0;
    for(int i=pos;i<pos+(1<<(len-1));i++) a+=v[i]!=x;
    for(int i=pos+(1<<(len-1));i<pos+(1<<len);i++) b+=v[i]!=x;
    return rt=min(a+dpf(pos+(1<<(len-1)), len-1, x+1), b+dpf(pos, len-1, x+1));
}

int solve()
{
    cin>>n;
    v.resize(n+10);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=17;j++)
        {
            for(int k=0;k<27;k++)
            {
                dpt[i][j][k]=-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        v[i]=ch-'a';
    }
    if(n==1)
    {
        if(v[0]==0)
        {
            cout<<0<<endl;
        }
        else cout<<1<<endl;
        return 0;
    }

    ttln=0;
    int tmp=n;
    while(tmp)
    {
        ttln++;
        tmp=tmp/2;
    }
    ttln--;
    int a, b;
    a=0, b=0;
    for(int i=0;i<n/2;i++)
    {
        a+=v[i]!=0;
    }
    for(int i=n/2;i<n;i++) b+=v[i]!=0;
    cout<<min(a+dpf(1LL<<(ttln-1), ttln-1, 1), b+dpf(0, ttln-1, 1))<<endl;
    return 0;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
















