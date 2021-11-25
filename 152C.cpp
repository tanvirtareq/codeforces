#include<bits/stdc++.h>
#define ll long long
#define md 1000000007
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    set<int> st[200];
    ll n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char ch;
            cin>>ch;
            st[j].insert(ch);
        }
    }
    ll ans=1;
    for(int i=0;i<m;i++)
    {
        ans=(ans*st[i].size())%md;
    }
    cout<<ans<<endl;

    return 0;
}



