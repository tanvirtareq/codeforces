#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define vi vector<int>
#define ii pair<int, int>
#define dbg(a) cout<<#a<<"="<<a<<endl
#define MX 1000000
using namespace std;

int r, c;
char a[100][100];

int clc(int x)
{
    int ct=0;
    for(int i=1;i<=r;i++) ct+=(a[i][x]=='A');
    return ct;
}

int clr(int x)
{
    int ct=0;
    for(int i=1;i<=c;i++) ct+=(a[x][i]=='A');
    return ct;
}

int ck(int k)
{
    if(k==0)
    {
        int ct=0;
        for(int i=1;i<=c;i++) ct+=clc(i);
        if(ct==c*r) return 1;
        return 0;
    }
    if(k==1)
    {
        if(clc(1)==r || clc(c)==r || clr(1)==c || clr(r)==c) return 1;
        return 0;
    }
    if(k==2)
    {
        for(int i=1;i<=c;i++)
        {
            if(clc(i)==r) return 1;
        }
        for(int i=1;i<=r;i++)
        {
            if(clr(i)==c) return 1;
        }
        if(a[1][1]=='A' || a[1][c]=='A' || a[r][1]=='A' || a[r][c]=='A') return 1;
        return 0;
    }
    if(k==3)
    {
        if(clc(1)>0 || clc(c)>0 || clr(1)>0 || clr(r)>0) return 1;
        return 0;
    }
    if(k==4)
    {
        for(int i=1;i<=c;i++) if(clc(i)>0) return 1;
//        else return 0;
    }
    return 0;
}

int solve()
{
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }
    if(ck(0))
    {
        cout<<0<<endl;
        return 0;
    }
    if(ck(1))
    {
        cout<<1<<endl;
        return 0;
    }
    if(ck(2))
    {
        cout<<2<<endl;
        return 0;
    }
    if(ck(3))
    {
        cout<<3<<endl;
        return 0;
    }
//    dbg(ck(4));
    if(ck(4))
    {
        cout<<4<<endl;
        return 0;
    }
    cout<<"MORTAL"<<endl;
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



