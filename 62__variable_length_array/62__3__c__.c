#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<=n-1;i++)
	{
		a[i]=i*i;
	}
	
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
	
}
