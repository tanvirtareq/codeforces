#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cerr<<#a<<"="<<a<<endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353
#define MX 200010

using namespace std;

string s;

int ck(int pos)
{
    int f=1;
    for(int i=0;i<7;i+=2)
    {
        if(s[pos+i]=='?') f=2;
        if(s[pos+i]!='?' and s[pos+i]!='a')
        {
            return 0;
        }
    }
    if(s[pos+1]=='?') f=2;
    if(s[pos+5]=='?') f=2;
    if(s[pos+3]=='?') f=2;

    if(s[pos+1]!='?' and s[pos+1]!='b') return 0;
    if(s[pos+5]!='?' and s[pos+5]!='b') return 0;
    if(s[pos+3]!='?' and s[pos+3]!='c') return 0;

    return f;

}

void f(int st, int ed)
{
    if(ed<st) return;
    for(int i=st;i<=ed;i++) if(s[i]=='?') s[i]='z';
}

int solve()
{
    int n;
    cin>>n;

    cin>>s;
    if(n<7)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    int c1, c2;
    c1=0, c2=0;
    for(int i=0;i<=n-7;i++)
    {
        int x=ck(i);
        if(x==1) c1++;
        if(x==2) c2++;
    }
//    dbg(c1);
//    dbg(c2);
    if(c1>1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(c1==1)
    {
        f(0, n-1);

        cout<<"YES"<<endl;
        cout<<s<<endl;
        return 0;
    }

    for(int i=0;i<=n-7;i++)
    {
        int x=ck(i);
        if(x==2)
        {
//            f(0, i-1);
//            f(i+1, n-1);
            f(0, n-1);
            for(int j=0;j<7;j+=2)
            {
                s[i+j]='a';
            }
            s[i+1]='b';
            s[i+5]='b';
            s[i+3]='c';
            cout<<"YES"<<endl;
            cout<<s<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}

int cnt()
{

    int ct=0;
    for(int i=0;i<=s.size()-7;i++)
    {
        int x=ck(i);
//        dbg(x);
        if(x==1) ct++;
    }
    return ct;

}

void slv2()
{
    int n;
    cin>>n;
    cin>>s;
    if(n<7)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<=n-7;i++)
    {
        vi v;
        for(int j=0;j<7;j+=2)
        {
            if(s[i+j]=='?')
            {
                v.push_back(i+j);
                s[i+j]='a';
            }
        }
        if(s[i+1]=='?')
        {
            v.push_back(i+1);
            s[i+1]='b';
        }
        if(s[i+5]=='?')
        {
            v.push_back(i+5);
            s[i+5]='b';
        }
        if(s[i+3]=='?')
        {
            v.push_back(i+3);
            s[i+3]='c';
        }
//        dbg(s);
        int ct=cnt();
//        dbg(ct);
        if(ct==1)
        {
            cout<<"YES"<<endl;
            f(0, i-1);
            f(i+7, n-1);
            cout<<s<<endl;
            return;
        }
        for(auto it:v) s[it]='?';

    }
    cout<<"NO"<<endl;
    return;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        slv2();

    return 0;
}


