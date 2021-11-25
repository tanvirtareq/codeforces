#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int b, s, c;
    b=s=c=0;
    string st;
    cin>>st;
    for(auto it:st)
    {
        if(it=='B') b++;
        if(it=='S') s++;
        if(it=='C') c++;
    }
    ll nb, ns, nc, pb, ps, pc;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    ll rb;
    cin>>rb;
    ll l=0, r=1000100000000;
    while(l<r)
    {
        ll md=r-(r-l)/2;
        ll x=max(0LL, (b*md-nb)*pb);
//        cout<<md<<endl;
//        cout<<"x"<<x<<endl;
        ll y=max(0LL, (s*md-ns)*ps);
        ll z=max(0LL, (c*md-nc)*pc);
        if(x+y+z<=rb)
        {
            l=md;
        }
        else r=md-1;
//        cout<<l<<endl;
    }
    cout<<l<<endl;
}




