#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;


string s;

ll chk(int a, int b)
{
    int f[2];
    f[0]=a;
    f[1]=b;
    int dr=0;
    ll ct=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-'0')==f[dr])
        {
            dr=!dr;
        }
        else ct++;
    }
    if(a!=b and dr==1) ct++;
    return ct;
}

int solve()
{
    cin>>s;
    ll mn=s.size()+100;
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            mn=min(mn, chk(i, j));
            // if(chk(i, j)==4)
            // {

            //     cout<<i<<" "<<j<<endl;
            // }
        }
    }
    cout<<mn<<endl;

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
