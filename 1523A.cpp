#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k--)
    {
        int f=0;
        string tm=s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') continue;
            
            if((i>0 and s[i-1]=='1')^(i<n-1 and s[i+1]=='1'))
            {
                f=1;
                tm[i]='1';
                // cout<<i<<endl;
            }
        }
        s=tm;
        // cout<<s<<endl;
        if(f==0) break;
    }
    cout<<s<<endl;

    return;
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