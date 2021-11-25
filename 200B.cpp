
 #include <stdio.h>
#include <stdlib.h>

int main()
{
    double tol=0,da;
    int n,i;
    scanf("%d",&n);
    i=n;
    while(i)
    {
        i--;
        scanf("%lf",&da);
        tol+=da/100;
    }
    tol*=100;
    tol/=n;
    printf("%.12lf",tol);
    return 0;
}