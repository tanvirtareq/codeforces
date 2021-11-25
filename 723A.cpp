#include<stdio.h>
int main()
{
	int x[3], max=0, min=1000, ans, i;
	
	for(i=0;i<3;i++)
	{
		scanf("%d", &x[i]);
		if(x[i]<min) min=x[i];
		if(x[i]>max) max=x[i];
		
		
	}
	
	ans=max-min;
	
	printf("%d", ans);
	
	return 0;
}