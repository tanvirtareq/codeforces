#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<" "<<a<<endl
#define ii pair<int, int>
#define vl vector<ll>

using namespace std;

string a;

void rv(int j)
{
    for(int i=0;i<=j;i++)
    {
        if(a[i]=='0') a[i]='1';
        else a[i]='0';
    }
    reverse(a.begin(), a.begin()+j+1);
}

void solve()
{
    int n;
    cin>>n;
    string b;
    cin>>a>>b;
    vl v;
    for(int i=n-1;i>=0;i--)
    {
        if(b[i]==a[i]) continue;
        if(b[i]==a[0]) 
        {
            rv(0);
            v.push_back(1);
        }
        rv(i);
        v.push_back(i+1);
    }
    cout<<v.size()<<" ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    cin>>t;
    while(t--)
        solve();

    return 0;
}





