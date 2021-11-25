#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>

using namespace std;

int solve()
{
    string b;
    cin>>b;
    string a;
    a.push_back(b[0]);
    for(int i=1;i<b.size();i+=2) a.push_back(b[i]);
    cout<<a<<endl;
    return 0;
}

int main()
{

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}




