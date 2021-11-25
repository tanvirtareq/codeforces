#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    char c, cd;
    ll d=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.') continue;
            c=s[i][j];
            if(s[i][j]=='W') cd='R';
            else cd='W';
            d=(i+j)%2;
            break;
        }
    }
    if(d==-1)
    {
        d=0;
        c='W';
        cd='R';   
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i+j)%2==d) 
            {
                if(s[i][j]==cd)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                s[i][j]=c;
            }
            else
            {
                if(s[i][j]==c)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                s[i][j]=cd;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
        cout<<endl;
    }
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}