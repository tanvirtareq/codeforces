/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-21 02:00:12 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-21 02:09:56
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ck(string s)
{
    ll stk=0;
    // cout<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(') stk++;
        else{
            stk--;
            if(stk<0) return 0;
        }
    }
    return stk==0;
}

void solve()
{
    // ll n;
    // cin>>n;
    string s;
    cin>>s;
    ll n=s.size();
    if(s[0]==s.back())
    {
        cout<<"NO"<<endl;
        return;
    }
    string b=s;
    string c=s;
    char st=s[0];
    char ses=s.back();
    for(int i=0;i<n;i++)
    {
        if(s[i]==st)
        {
            b[i]='(';
            c[i]='(';
        }
        else if(s[i]==ses)
        {
            b[i]=')';
            c[i]=')';
        }
        else
        {
            b[i]=')';
            c[i]='(';
        }
    }
    if(ck(b) or ck(c)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}

int main()
{
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}