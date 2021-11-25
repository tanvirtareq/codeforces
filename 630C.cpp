#include<stdio.h>
int main()
{
	int n, i,j;
	long long unsigned count=0, m=1;
	scanf("%d", &n);
	for(j=1;j<=n;j++)
	{
		m=1;
		for(i=1;i<=j;i++)
		{
			m=m*2;
			
		}
		
		count=count+m;
		
	}
	printf("%llu", count);
	
	
	
	
	
	return 0;
	
}
