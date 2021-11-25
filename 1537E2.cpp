#include <bits/stdc++.h>
#define ll long long
using namespace std;

void computeLPSArray(string pat, int M, ll lps[])
{
    int len = 0;
  
    lps[0] = 0; // lps[0] is always 0
  
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];
  
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    string tma, s;
    cin >> tma;
    for(int i=0;i<k;i++)
    {
        s.push_back(tma[i%n]);
    }
    n=k;
    ll lps[n];
    computeLPSArray(s, n, lps);
    // for(int i=0;i<n;i++) cout<<lps[i];
    // cout<<endl;
    string mn;
    for(int i=0;i<k;i++)
    {
        mn.push_back(s[i%n]);
    }
    // cout<<mn<<endl;
    for(int i=1;i<n;i++)
    {
        if(s[i]>s[0])
        {
            string x;
            for(int j=0;j<k;j++)
            {
                x.push_back(s[j%i]);
            }
            mn=min(mn, x);
            break;
        }
    }
    // cout<<mn<<endl;
    ll lst[n];
    lst[0]=0;
    for(int i=1;i<n;i++)
    {
        lst[i]=lst[i-1];
        if(lps[i]==0) lst[i]=i;
    }
    for(int i=1;i<n;i++)
    {
        if(lps[i-1]!=0 and lps[i]<=lps[i-1])
        {
            // cout<<s[i]<<" "<<s[0]<<endl;
            if(s[i]>s[lps[i-1]])
            {
                n=lst[i-1]+1;
                // cout<<n<<endl;
                // cout<<i<<endl;
                break;
            }
        }
    }
    string x;
    for(int i=0;i<k;i++)
    {
        x.push_back(s[i%n]);
    }
    mn=min(mn, x);
    cout<<mn<<endl;
    // cout<<endl;
}

int main()
{

    int t = 1;
    // cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}