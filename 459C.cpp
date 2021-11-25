#include<bits/stdc++.h>

using namespace std;


int n, k, d;

vector<int> pls(vector<int> x)
{
    int cr=1;
    for(int i=x.size()-1;i>=0;i--)
    {
        int fc=(x[i]+cr);
//        cout<<fc<<endl;
        if(fc>k)
        {
            cr=1;
            fc=fc-k;
        }
        else cr=0;
        x[i]=fc;
//        cout<<cr<<endl;
    }
    if(cr>0)
    {
        cout<<-1<<endl;
        exit(0);
    }
    return x;
}
int main()
{
    cin>>n>>k>>d;
    vector<int> s[n+10];
    for(int i=1;i<=d;i++)
    {
        s[1].push_back(1);
    }
//    cout<<s[1]<<endl;
    for(int i=2;i<=n;i++)
    {
        s[i]=pls(s[i-1]);
//        cout<<s[i]<<endl;
    }
    for(int i=0;i<d;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<s[j][i]<<" ";
        }
        cout<<endl;
    }
}
