#include<stdio.h>
#include<string.h>
int main()
{
     char a[1000];

     gets(a);

     int l=strlen(a);

     if(a[0]>='a'&&a[0]<='z')
     {
          a[0]='A'+(a[0]-'a');

          printf("%c", a[0]);
     }

     else printf("%c", a[0]);

     for(int i=1;i<l;i++)
     {
          printf("%c", a[i]);
     }

     return 0;
}