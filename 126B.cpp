#include<bits/stdc++.h>
#define MX 100030
using namespace std;

string s;
void fn(int id)
{
//    cout<<id<<endl;
    for(int i=0;i<id;i++)
        cout<<s[i];
    exit(0);
}
void fp()
{
    cout<<"Just a legend";
    exit(0);
}
int main()
{
    cin>>s;
    int i=0, j=0;
    int n=s.size();
    if(n<3) fp();
    vector<int> lps(s.size()+10);
    lps[0]=0;
//    cout<<0<<endl;
    for(int i=1;i<s.size();i++)
    {
        while(j!=0 and s[j]!=s[i])
        {
            j=lps[j-1];
        }
        if(s[j]!=s[i])
        {
            lps[i]=0;
        }
        else{
            lps[i]=++j;
        }
//        cout<<lps[i]<<endl;
    }
//    cout<<lps[n-1]<<endl;
    if(lps[n-1]==0)
    {
        fp();
    }
    for(int i=0;i<n-1;i++)
    {
        if(lps[i]==lps[n-1])
        {
            fn(lps[i]);
            return 0;
        }
    }
    if(lps[lps[n-1]-1]==0)
    {
        fp();
        return 0;
    }
    fn(lps[lps[n-1]-1]);
    return 0;
}

