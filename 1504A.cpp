#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll l=0, r=s.size()-1;
        ll id=-10;
        while(l<r)
        {
            if(s[l]=='a' and s[r]=='a') l++, r--;
            else if(s[l]=='a')
            {
                id=l;
                break;
            }
            else if(s[r]=='a')
            {
                id=r;
                break;
            }
            else
            {
                id=l-1;
                break;
            }

        }
        if(id==-10 and l==r)
        {
            if(s[l]!='a') id=l-1;
        }
        if(id==-10)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<=id;i++) cout<<s[i];
            cout<<'a';
            for(int i=id+1;i<s.size();i++) cout<<s[i];
            cout<<endl;
        }
    }

    return 0;
}