#include <bits/stdc++.h>
#define nl endl
#define dbg(a) cout << #a << "=" << a << endl
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define md 1000000007

using namespace std;

int solve()
{
    int n;
    cin>>n;
    map<int, int> mp;
    set<int> st;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        st.insert(x);
    }
    set<pair<long long, long long> > st1;
    for(auto it:mp)
    {
        if(it.second>=2)
        {
            st1.insert({it.second, it.first});
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        char ch;
        int x;
        cin>>ch>>x;
        if(st1.size()>0 and mp[x]>=2 and st1.find({mp[x], x})!=st1.end())
            st1.erase({mp[x], x});
        if(ch=='+') mp[x]++;
        else mp[x]--;
        if(mp[x]>=2)
            st1.insert({mp[x], x});

        if(st1.size()==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        auto rb=st1.rbegin();
        if((*rb).first>=8)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(st1.size()<2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(st1.size()==2)
        {
            auto it=st1.begin();
            auto bt=it;
            it++;
            // dbg((*it).first);
            if((*it).first>=6 and (*bt).first>=2)
            {
                cout<<"YES"<<endl;
            }
            else if ((*it).first>=4 and (*bt).first>=4)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            continue;
        }
        if(st1.size()>2)
        {
            auto rb=st1.rbegin();
            auto rb2=rb;
            rb--;
            auto rb1=rb;
            rb--;
            if((*rb).first>=2 and (*rb1).first>=2 and (*rb2).first>=4)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            continue;
        }
        
    }
    return 0;
}

int main()
{
    fast;
    solve();
    return 0;
}