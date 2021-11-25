#include<bits/stdc++.h>

using namespace std;

int slv1(int n, int p, string s)
{
    int c=0;
    int mx=p;
    for(int i=p;i<=n/2;i++)
    {
        if(s[i]!=s[n-i])
        {
            mx=max(mx, i);
        }
    }
//    c=mx-p;
    int mn=mx;
    for(int i=p-1;i>=0;i--)
    {
        if(s[i]!=s[n-i])
        {
            mn=min(mn, i);
        }
    }
    c+=mx-mn;
    c+=min(abs(p-mx), abs(p-mn));
    return c;
}

int main()
{
    int n, p;
    string s;
    cin>>n>>p;
    cin>>s;
    p--;
    n--;
    int c=0;
    for(int i=0;i<=n/2;i++)
    {
//        cout<<s[i]<<" "<<s[n-i]<<endl;
        if(s[i]!=s[n-i])
        {
            int x=abs(s[i]-s[n-i]);
            x=min(x, 26-x);
            c+=x;
//            cout<<x<<endl;
        }
    }
//    cout<<c<<endl;
    if(p<=n/2)
    {
        c+=slv1(n, p, s);
    }
    else
    {
//        reverse(s.begin(), s.end());
        p=n-p;
        c+=slv1(n, p, s);
    }
    cout<<c<<endl;

    return 0;
}
