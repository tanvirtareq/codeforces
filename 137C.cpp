#include<bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ii> v(n);
    for(auto &it:v) cin>>it.first>>it.second;
    sort(v.begin(), v.end());
    int mx=v[0].second;
    int ct=0;
    for(int i=1;i<n;i++)
    {
        if(v[i].second<mx) ct++;
        mx=max(mx, v[i].second);
    }
    cout<<ct<<endl;
    return 0;
}
