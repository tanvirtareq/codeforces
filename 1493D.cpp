/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-27 05:06:48 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-27 06:07:58
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

set<pair<ll, ll> > st[200100];

ll mns[200100];

ll md=1000000007LL;

map<ll, ll> mp[200100];

void solve()
{
    ll n, q;
    cin>>n>>q;
    ll gc=1;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(i==0) gc=x;
        else gc=__gcd(gc, x);
        for(ll j=2;j*j<=x;j++)
        {
            if(x%j==0)
            {
                ll ct=0;
                while(x%j==0)
                {
                    ct++;
                    x/=j;
                }
                st[j].insert({ct, i});
                mp[i][j]=ct;
            }
        }
        if(x>1)
        {
            st[x].insert({1, i});
            mp[i][x]=1;
        }
    }
    gc=1;
    for(ll i=2;i<=200000;i++)
    {
        if(st[i].size()<n) continue;
        ll yy=(*st[i].begin()).first;
        mns[i]=yy;
        while(yy--)
        {
            gc=(gc*i)%md;
        }
    }
    // cout<<st[2].size()<<endl;
    while(q--)
    {
        ll id, x;
        cin>>id>>x;
        id--;
        for(ll i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                ll ct=0;
                while(x%i==0)
                {
                    ct++;
                    x/=i;
                }
                // cout<<ct<<endl;
                ll tm=mp[id][i];
                // cout<<tm<<endl;
                auto it=st[i].find({tm, id});
                if(it!=st[i].end()) st[i].erase(it);
                // cout<<st[i].size()<<endl;
                st[i].insert({tm+ct, id});
                mp[id][i]=tm+ct;
                if(st[i].size()==n)
                {
                    ll yy=(*st[i].begin()).first-mns[i];
                    mns[i]=(*st[i].begin()).first;
                    while(yy--)
                    {
                        gc=(gc*i)%md;
                    }
                }
            }
        }
        if(x>1)
        {
            ll tm=mp[id][x];
            auto it=st[x].find({tm, id});
            if(it!=st[x].end()) st[x].erase(it);
            st[x].insert({tm+1, id});
            mp[id][x]=tm+1;
            if(st[x].size()==n)
            {
                ll yy=(*st[x].begin()).first-mns[x];
                mns[x]=(*st[x].begin()).first;
                while(yy--)
                {
                    gc=(gc*x)%md;
                }
            }
        }
        cout<<gc<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}