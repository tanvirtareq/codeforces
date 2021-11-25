#include<bits/stdc++.h>

using namespace std;

int main()
{
    string x, s, an;
    cin>>s;
    for(auto it:s)
    {
        if(x.size()<=1) x.push_back(it);
        else
        {
            char b=x[x.size()-1];
            char c=x[x.size()-2];
            if(b==c and b==it) continue;
            x.push_back(it);
        }
    }

    for(auto it:x)
    {
        if(an.size()<=2) an.push_back(it);
        else
        {
            if(it!=an[an.size()-1])
            {
                an.push_back(it);
                continue;
            }
            char a=an[an.size()-3];
            char b=an[an.size()-2];
            if(a!=b)
            {
                an.push_back(it);
                continue;
            }
        }
    }
    cout<<an<<endl;

    return 0;
}
