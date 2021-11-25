#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define nl '\n'

void solve()
{
    string s;
    cin>>s;
    if((s.back()-'0')%2==0)
    {
        cout<<0<<endl;
        return;
    }
    else if((s[0]-'0')%2==0)
    {
        cout<<1<<endl;
    }
    else
    {
        ll f=0;
        for(auto it:s)
        {
            ll x=it-'0';
            if(x%2==0)
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<2<<endl;
            return;
        }
        else cout<<-1<<endl;
    }
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}