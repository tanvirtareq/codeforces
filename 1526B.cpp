#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(s[0]==s[1])
    {
        cout<<"YES"<<endl;
        return;
    }
    if(s.size()==2)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

    return;
}

void solve2()
{
    ll x;
    cin>>x;
    ll y=100;
    while(x>=y/10)
    {
        ll z=x%y;
        if(z%11==0)
        {
            ll ff=z/11;
            ll gg=x/y;
            gg-=ff*11/y;
            ll flg=0;
            ll tmp=gg;

            cout<<"YES"<<endl;
            return;
        }
        y*=10;
    }
    cout<<"NO"<<endl;
}

void brt()
{
    ll a[]={11, 111, 1111, 11111, 111111, 1111111, 111111111};
    for(int i=0;i<6;i++)
    {
        cout<<a[i]%11<<endl;
    }
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         for(int k=0;k<5;k++)
    //         {
    //             cout<<i*11+j*111+k*1111<<endl;
    //         }
    //     }
    // }
}

ll c[10000010];
ll a[]={11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
ll ck(ll x)
{
    if(x>10000000)
    {
        for(int i=0;i<9;i++)
        {
            if(x%a[i]==0) return 1;
            if(x-a[i]>0 and ck(x-a[i])) return 1;
        }
    }
    ll &rt=c[x];
    if(rt==-1) return 0;
    if(rt==1) return 1;
    for(int i=0;i<9;i++)
    {
        if(x%a[i]==0)
        {
            rt=1;
            return 1;
        }
        if(x-a[i]>0 and ck(x-a[i]))
        {
            rt=1;
            return 1;
        }
    }
    rt=-1;
    return 0;
}

void solve3()
{
    ll x;
    cin>>x;
    for(ll b=0;b<11;b++)
    {
        if((x-b*111)%11==0 and x-b*111>=0)
        {
            // cout<<x<<endl;
            // cout<<x%11<<" "<<b%11<<endl;
            // cout<<b<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // brt();
        solve3();
    }
    return 0;
}