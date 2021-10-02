#include"59_2.h"

matrix::matrix()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			a[i][j]=0;	
		}
	}
}

void matrix::getdata()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			std::cin>>a[i][j];
		}
	}
}

matrix matrix::operator+(matrix m)
{
	matrix temp;
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			temp.a[i][j]=a[i][j]+m.a[i][j];
		}
	}
	return temp;
}

matrix matrix::operator*(matrix m)
{
	matrix temp;
	int i,q,j;

	for(i=0;i<=2;i++)
	{
		for(q=0;q<=2;q++)
		{
			for(j=0;j<=2;j++)
			{
				temp.a[i][q]=temp.a[i][q]+a[i][j]*m.a[j][q];
			}
			
		}
	}
	return temp;	
}

void matrix::display()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			std::cout<<a[i][j]<<" ";
		}
		std::cout<<"\n";
	}
	std::cout<<"\n\n";
}









