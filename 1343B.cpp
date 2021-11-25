#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        if(n%4!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int ct=0;

            for(int i=1;i<=n/2;i++){
                cout<<2*i<<" ";
                ct+=2*i;
            }
            for(int i=1;i<n/2;i++){
                cout<<2*i-1<<" ";
                ct-=(2*i-1);
            }
            cout<<ct<<endl;
        }
    }

    return 0;
}

