#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define MX 1010
using namespace std;

ll ar[MX][MX], f1[MX][MX], f2[MX][MX], b1[MX][MX], b2[MX][MX];

int main()
{
    fast;
    string s;
    cin>>s;
    ll ao, ae, bo, be;
    ao=ae=bo=be=0;
    ll anso=0, anse=0;
    for(int i=0;i<s.size();i++)
    {
        anso++;
        if(s[i]=='a')
        {
            if(i%2==0)
            {
                anso+=ae;
                ae++;
                anse+=ao;
            }
            else
            {
                anso+=ao;
                ao++;
                anse+=ae;
            }
        }
        else
        {
            if(i%2==0)
            {
                anso+=be;
                be++;
                anse+=bo;
            }
            else
            {
                anso+=bo;
                bo++;
                anse+=be;
            }
        }
    }
    cout<<anse<<" "<<anso<<endl;

    return 0;
}



