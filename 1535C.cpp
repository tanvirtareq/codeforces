#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    string s;
    cin>>s;
    n=s.size();
    // cin>>n;
    ll lnk[n];
    lnk[0]=-1;
    
    if(s[0]!='?') lnk[0]=0;
    for(int i=1;i<n;i++)
    {
        lnk[i]=lnk[i-1];
        if(s[i]!='?') lnk[i]=i;
    }
    // for(int i=0;i<n;i++) cout<<lnk[i]<<" ";
    // cout<<endl;
    ll tt=0;
    string b=s;
    ll lst=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='?')
        {
            if(i>0 and b[i]==b[i-1])
            {
                lst=lnk[i-1];
            }
            tt+=(i-lst);
        }
        else
        {
            b[i]='0';
            if(i>0 and b[i-1]=='0') b[i]='1';
            if(i>0 and b[i]==b[i-1])
            {
                lst=lnk[i-1];
            }
            tt+=(i-lst);
        }
    }
    cout<<tt<<endl;

}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
