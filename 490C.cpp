#include<bits/stdc++.h>
#define ll long long
using namespace std;

void pr(string s, int i, int j)
{
    while(i<=j) cout<<s[i], i++;
    cout<<endl;
}

ll power(ll b, ll p, ll md)
{
    if(p==0) return 1;
    if(p==1) return b%md;
    ll x=power(b, p/2, md);
    x=(x*x)%md;
    if(p&1) x=(x*b)%md;
    return x;
}

int main()
{
    string s;
    cin>>s;
    ll a, b;
    cin>>a>>b;
    ll x=(s[0]-'0')%a;
    ll y=0;
    for(int i=1;i<s.size();i++)
    {
        y=(y*10)%b;
        y=(y+s[i]-'0')%b;
    }
    for(int i=1;i<s.size();i++)
    {
//        cout<<x<<" "<<y<<endl;
        if(x==0 and y==0 and s[i]!='0')
        {
            cout<<"YES"<<endl;
            pr(s, 0, i-1);
            pr(s, i, s.size()-1);
            return 0;
        }
        if(i==s.size()-1) break;
        x=(x*10)%a;
        x=(x+s[i]-'0')%a;
        ll p=s.size()-1-i;
        ll pw=power(10, p, b);
        pw=(pw*(s[i]-'0'))%b;
        y=(y-pw)%b;
        y=(y+b)%b;
    }
    cout<<"NO"<<endl;

    return 0;
}

