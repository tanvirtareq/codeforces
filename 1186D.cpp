
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

bool chk[sz+5];
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

   // cout<< prime[0] <<endl;


}



int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    li n;
    cin>>n;

    li ar[n+10];

    double x[n+10];

    li f=0;

    for(li  i=1;i<=n;i++)
    {

        cin>>x[i];

        ar[i]=floor(x[i]);
        f+=ar[i];


    }

    for(li i=1;i<=n;i++)
    {
        if(f<0)
        {
//            cout<<f<<endl;

            if(x[i]!=ar[i])
            {


            ar[i]+=1;
            f++;
            }
            cout<<ar[i]<<endl;

        }

        else{
            cout<<ar[i]<<endl;
        }

    }


	return 0;
}


