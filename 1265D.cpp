#include<bits/stdc++.h>

using namespace std;

void prn(int ar[], int n)
{
    for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
    cout<<endl<<endl;
}

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int n=a+b+c+d;

    int ar[2*n+10];
    memset(ar, -1, sizeof ar);

    int a1=a;
    int c1=c;

    for(int i=2;i<=2*a;i+=2) ar[i]=0;
//    prn(ar, 2*a);
    for(int i=2+2*a;i<=2*(a+c);i+=2) ar[i]=2;
//    cout<<a+c<<endl;
//    prn(ar, 2*(a+c)+1);
//    if(a!=0)
    for(int i=2*(a+c)-1;i>2+2*a and d>0;i-=2, d--) ar[i]=3;

//    if(a==0 and b==0)
//        for(int i=2*(a+c)-1;i>0 and d>0;i-=2, d--) ar[i]=3;
//    prn(ar, 2*(a+c)+1);

//cout<<d<<endl;
    if(d>=1){
     ar[2*(a+c)+1]=3;
     d--;
     }
//     prn(ar, 2*(a+c)+1);

    if(d==1)
    {
        if(a==0)
        {
            ar[1]=3;
            d--;
//            cout<<ar[1]<<endl;
        }
        else{
        cout<<"NO"<<endl;
        return 0;
        }
    }
    if(d>0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

//    prn(ar, 2*(a+c)+1);

    for(int i=3;b>0 and i<2*(a+c);i+=2)
    {
        if(ar[i]==-1)
        {
            b--;
            ar[i]=1;
        }
    }
//    cout<<b<<endl;
    if(b>0)
    {
        if(ar[1]!=-1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        b--;
        ar[1]=1;
    }
//    prn(ar , 2*(a+c)+1);

    if(b>=1 && ar[2*(a+c)+1]!=-1)
    {
        cout<<"NO"<<endl;
        return 0;

    }
//    prn(ar, 2*(a+c)+1);
    if(b==1) ar[2*(a+c)+1]=1;

    int ct=0;
    if(ar[1]!=-1) ct++;
    if(ar[1]!=-1 and ar[2]!=-1  and abs(ar[2]-ar[1])!=1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(ar[2]!=-1) ct++;

    for(int i=3;i<=n+10;i++)
    {
        if(ar[i]==-1) break;
        ct++;
        if(abs(ar[i]-ar[i-1])!=1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
//    cout<<ct<<endl;
    if(ct!=n) cout<<"NO"<<endl;
    else
    {

        cout<<"YES"<<endl;
        if(ar[1]!=-1) cout<<ar[1]<<" ";
        for(int i=2;i<=n+100;i++)
        {
            if(ar[i]==-1) break;
            cout<<ar[i]<<" ";
        }
    }



    return 0;
}

// 1 3 40001 40000

// 0 0 1 2

// 0 1 1 1

// 0 0 1 1
