#include<stdio.h>
#include<string.h>
int main()
{
     char a[101];

     scanf("%s", a);

     int l=strlen(a);

     for(int i=0;i<l;i++)
     {
          if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z'))
          {


          if(a[i]!='A'&&a[i]!='O'&&a[i]!='Y'&&a[i]!='E'&&a[i]!='U'&&a[i]!='I'&&a[i]!='a'&&a[i]!='o'&&a[i]!='y'&&a[i]!='e'&&a[i]!='u'&&a[i]!='i')
          {
               if(a[i]>='A'&&a[i]<='Z')
               {
                    char c='a'+(a[i]-'A');

                    printf(".%c", c);
               }

               else
               printf(".%c", a[i]);
          }
          }
     }


     return 0;
}