#include<bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define dbg(a) cout<<#a<<"="<<a<<endl
using namespace std;

int main()
{
    ll n, m;
    cin>>n>>m;
    vl l(m+10), d(m+10);

    for(int i=1;i<=m;i++)
    {
        cin>>l[i];
    }
    for(int i=m;i>0;i--)
        d[i]=d[i+1]+l[i];
    vl an;
    an.push_back(n-l[1]+1);
    int j=n-l[1];
    int k=n-1;
    if(m==1)
    {
        if(j==0)
        {
            cout<<1<<endl;
        }
        else cout<<-1<<endl;
        return 0;
    }
//    dbg(j);
//    dbg(k);
    for(int i=2;i<m;i++)
    {
        int aibo=k-l[i];
//        dbg(aibo);
//        dbg(d[i+1]);
        if(aibo<0)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(aibo<=d[i+1])
        {
            an.push_back(aibo+1);
            j=min(j, aibo);
            k--;
//            dbg(j);
//            dbg(k);
        }
        else
        {
            int baki=d[i+1];
            int tm=1;
//            dbg(j);
//            dbg(k);
            for(int fc=i;fc<=m;fc++)
            {
                an.push_back(tm);
                tm+=l[fc];
//                dbg(tm);

            }
            if(tm<=j || tm-1>k)
            {
                cout<<-1<<endl;
//                dbg(tm);
                return 0;
            }
            for(auto it:an) cout<<it<<" ";
            return 0;
        }
    }
    an.push_back(1);
    int fc=1+l[m];
//    dbg(fc);
//    dbg(j);
//    dbg(k);
    if(fc<j || fc-1>k)
    cout<<-1<<endl;
    else
    for(auto it:an) cout<<it<<" ";


    return 0;
}
