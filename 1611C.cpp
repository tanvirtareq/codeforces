#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define nl '\n'

void solve()
{
    deque<ll> dq;
    ll n;
    cin>>n;
    std::vector<ll> v(n);
    for(auto &it:v)
    {
        cin>>it;
    }
    int i=0, j=n-1;
    if(v[i]==n)
    {
        dq.push_back(n);
        i++;
    }
    else if(v[j]==n)
    {
        dq.push_back(n);
        j--;
    }
    else if(dq.size()==0)
    {
        cout<<-1<<endl;
        return;
    }
    while(i<=j)
    {
        if(v[i]<v[j]) dq.push_front(v[i]), i++;
        else dq.push_back(v[j]), j--;

    }
    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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