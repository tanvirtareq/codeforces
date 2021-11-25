#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        vector<int> v[2];
        v[a[0]-'0'].push_back(1);
        v[!(a[0]-'0')].push_back(0);
        for(int i=1;i<n;i++)
        {
            v[0].push_back(v[0].back());
            v[1].push_back(v[1].back());
            v[a[i]-'0'][i]++;
        }
        // for(auto it:v[0]) cout<<it<<' ';
        // cout<<endl;
        // for(auto it:v[1]) cout<<it<<" ";
        // cout<<endl;
        int ct=0;
        int flg=0;
        for(int i=n-1;i>=0;i--)
        {
            if(ct)
            {
                a[i]=(!(a[i]-'0'))+'0';
                swap(v[0][i], v[1][i]);
            }
            if(a[i]==b[i]) continue;
            if(v[0][i]!=v[1][i])
            {
                flg=1;
                // cout<<i<<endl;
                break;
            }
            a[i]=b[i];
            ct=!ct;
        }
        if(flg==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}