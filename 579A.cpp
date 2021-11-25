#include<stdio.h>
int main()
{
	long long unsigned x, a=1, count=0;
	
	long long unsigned j=1, i, b;
	
	scanf("%llu", &x);
	
	while(x)
	{
		if(x%2==1) count++;
		
		x=x/2;
		
	}
	
	
	
	
	printf("%llu", count);
	
	return 0;
}