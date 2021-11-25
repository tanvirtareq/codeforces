#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>
#define md 998244353

using namespace std;

int solve()
{
    ll n, k;
    cin>>n>>k;
    vector<pair<ll, ll> > a1, a2, a3;
    map<ll, ll> mp1, mp2, mp3;
    for(int i=1;i<=n;i++)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        if(b==1) a1.push_back({a, i});
        if(c==1) a2.push_back({a, i});
        if(b==1 and c==1) a3.push_back({a, i});

        if(b==1)
        {
            mp1[i]=1;
        }
        if(c==1) mp2[i]=1;
        if(b==1 and c==1) mp3[i]=1;
    }

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    sort(a3.begin(), a3.end());
    reverse(a1.begin(), a1.end());
    reverse(a2.begin(), a2.end());
    reverse(a3.begin(), a3.end());

    map<ll, ll> mp;
    ll ka, kb;
    ka=kb=k;
    ll ans=0;
    while(ka>0 || kb>0)
    {
//        dbg(ka);
//        dbg(kb);
        while(a1.size()>0 and mp[a1.back().second]==1)
        {
            a1.pop_back();
        }
        while(a2.size()>0 and mp[a2.back().second]==1)
        {
            a2.pop_back();
        }
        while(a3.size()>0 and mp[a3.back().second]==1)
        {
            a3.pop_back();
        }
        if(a1.size()==0 and ka>0)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(a2.size()==0 and kb>0)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(a3.size()==0)
        {
            while(ka)
            {
                ka--;
                while(a1.size()>0 and mp[a1.back().second]==1)
                {
                    a1.pop_back();
                }
                if(a1.size()==0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                ans+=a1.back().first;
                mp[a1.back().second]=1;
                if(mp2[a1.back().second]==1) kb--;
                a1.pop_back();
            }
            while(kb)
            {
                kb--;
                while(a2.size()>0 and mp[a2.back().second]==1)
                {
                    a2.pop_back();
                }
                if(a2.size()==0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                ans+=a2.back().first;
                mp[a2.back().second]=1;
                if(mp1[a2.back().second]==1) ka--;
                a2.pop_back();
            }

            cout<<ans<<endl;
            return 0;
        }
        if(ka<=0)
        {
            while(kb)
            {
                kb--;
                while(a2.size()>0 and mp[a2.back().second]==1)
                {
                    a2.pop_back();
                }
                if(a2.size()==0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                ans+=a2.back().first;
                mp[a2.back().second]=1;
                a2.pop_back();
            }
            cout<<ans<<endl;
            return 0;
        }
        if(kb<=0)
        {
            while(ka)
            {
                ka--;
                while(a1.size()>0 and mp[a1.back().second]==1)
                {
                    a1.pop_back();
                }
                if(a1.size()==0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                ans+=a1.back().first;
                mp[a1.back().second]=1;
                a1.pop_back();

            }
            cout<<ans<<endl;
            return 0;
        }
        if(a3.back().first<=a1.back().first+a2.back().first)
        {
            ans+=a3.back().first;
            mp[a3.back().second]=1;
            a3.pop_back();
            ka--;
            kb--;
        }
        else if(a1.back().first<=a2.back().first || 1)
        {
            ans+=a1.back().first;
            mp[a1.back().second]=1;
            ka--;
//            if(mp2[a1.back().second]==1) kb--;
            a1.pop_back();
            ans+=a2.back().first;
            mp[a2.back().second]=1;
            kb--;
//            dbg(ka);
//            dbg(kb);
//            if(m)
        }
        else
        {
            ans+=a2.back().first;
            mp[a2.back().second]=1;
            kb--;
            if(mp1[a2.back().second]==1) ka--;
            a2.pop_back();
        }

    }
    cout<<ans<<endl;

    return 0;
}

int main()
{
    fast;
    solve();

    return 0;
}

/**

6 1
6 0 0
11 1 0
9 0 1
21 1 1
10 1 0
8 0 1

*/















