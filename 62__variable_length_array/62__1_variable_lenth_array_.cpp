#include<iostream>

int main()
{
	int n=5,i;
	
	int a[n];
	for(i=0;i<=n-1;i++)
	{
		a[i]=i*i;
	}
	for(i=0;i<=n-1;i++)
	{
		std::cout<<a[i]<<" ";
	}
}
