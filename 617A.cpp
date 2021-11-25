#include<stdio.h>
int main()
{
	
	int a, b;
	
	scanf("%d", &a);
	
	b=a/5;
	
	if(a%5==0)
	b=b;
	
	else
	b=b+1;
	
	printf("%d", b);
	
	
	
	return 0;
}