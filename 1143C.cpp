#include<bits/stdc++.h>


#define sci(a) scanf("%d", &a)
#define v(a) vector<a>
#define p(a, b) pair<a, b>

using namespace std;

typedef long long int li;
typedef long long unsigned lu;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef priority_queue<int> mxpqi;
typedef priority_queue<int, vector<int> , greater<int> > mnpqi;

template<class T>
void inline showbinaryrepresentation_of_pos_int(T a)
{
    T x=log(a)/log(2)+1;

//    cout<<a<<endl;

    for(int i=x;i>=0;i--)
    {
        if(a&((T)1<<i))
        cout<<1;
        else cout<<0;

    }
    cout<<endl;

    return;

}

li inline power(li b, li p)
{
    if(b==2) return (li)1<<(p);

    if(p==0) return 1;

    if(p==1) return b;

    li x=power(b, p/2);

    if(p&1)
    {
        return b*x*x;
    }

    else return x*x;

}


/// for seive prime

#define sz 100000

bool chk[sz];
vector<int> prime;

void seive()
{
    prime.push_back(2);

    for(int i=3;i*i<=sz;i+=2)
    {
        if(chk[i]==0) {

        for(int j=i+i;j<=sz;j+=i)
            chk[j]=1;

        }
    }


    for(int i=3;i<=sz;i+=2)
    {
        if(chk[i]==0){
            prime.push_back(i);
        }
    }


}

struct point{

    int prnt;

    vector<int> v;

    int c;

};



int main()
{



    int n, x, y;

    cin>>n;

     point p[n+10];

    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;

        p[i].prnt=x;
        p[i].c=y;

        p[x].v.push_back(i);

    }

    vector<int> an;

    for(int i=1;i<=n;i++)
    {

        if(p[i].prnt!=-1 and  p[i].c==1)
        {
            int x=0;

            for(int j=0;j<p[i].v.size();j++)
            {
                if(p[i].v[j]<=n and   p[p[i].v[j]].c==0) x=1;
            }

            if(x==0)
            {
                an.push_back(i);
            }

        }

    }

    if(an.size()==0)
    {
        cout<<-1<<endl;
        return 0;
    }

    sort(an.begin(), an.end());

    for(int i=0;i<an.size();i++)
    {
        cout<<an[i]<<" ";
    }

	return 0;
}

