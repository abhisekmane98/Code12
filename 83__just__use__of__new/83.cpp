#include<iostream>

int main()
{
	int *a=new int[4];
	int (*b)[4]=new int[3][4];
	int (*c)[4][2]=new int[3][4][2];
	
	int i,j,k;
	count=1;
	for(i=0;i<=3;i++)
	{
		a[i]=count++;
	}
	count=1;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			b[i][j]=count++;
		}
	}
	count=1;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			for(k=0;k<=1;k++)
			{
				c[i][j][k]=count++;
			}
		}
	}
	
	for(i=0;i<=3;i++)
	{
		std::cout<<a[i]<<" ";
	}
	std::cout<<"\n\n";
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			std::cout<<b[i][j]<<" ";
		}
		std::cout<<"\n";
	}
	std::cout<<"\n\n";
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			for(k=0;k<=1;k++)
			{
				std::cout<<c[i][j][k]<<" ";
			}
			std::cout<<"\n";
		}
		std::cout<<"\n";
	}
	
	
	
}
