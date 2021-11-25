/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-17 11:11:14 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-17 12:36:45
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ck(vector<ll> ch, ll k)
{
    ll rt=0;
    for(int i=0;i<26;i++)
    {
        if(ch[i]%k==0) continue;
        rt+=(k-ch[i]%k);
    }
    return rt;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n%k)
    {
        cout<<-1<<endl;
        return;
    }
    vector<ll> ch(27);
    for(auto it:s) ch[it-'a']++;
    if(ck(ch, k)==0) 
    {
        cout<<s<<endl;
        return;
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        ch[s[i]-'a']--;
        ll baki=ck(ch, k);
        if(baki>(n-i) or s[i]=='z') continue;
        ll chk=s[i]-'a';
        for(int j=s[i]-'a'+1;j<26;j++)
        {
            if(ch[j]%k)
            {
                chk=j;
                break;
            }
            else if(baki+k<=(n-i))
            {
                chk=j;
                break;
            }
            
        }
        if(chk==s[i]-'a' and baki<(n-i)) chk++;
        if(chk==s[i]-'a' and baki==(n-i)) continue;

        s[i]=chk+'a';
        ch[chk]++;
        vector<ll> vl;
        for(int j=0;j<26;j++)
        {
            if(ch[j]%k==0) continue;
            ll kkk=k-ch[j]%k;
            while(kkk--) vl.push_back(j);
        }
        for(int j=s.size()-1;j>i;j--)
        {
            if(vl.size()==0) s[j]='a';
            else
            {
                s[j]=vl.back()+'a';
                vl.pop_back();
            }
        }
        // cout<<i<<endl;
        cout<<s<<endl;
        break;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        // cout<<"Case #"<<cs<<": ";
        solve();
    }
    return 0;
}