#include<iostream>

void multiply(int(*)[3],int(*)[3]);
void display(int(*)[3]);

int main()
{
	int a[][3]={
					1,0,1,
					2,4,1,
					0,1,1
				};
	int b[][3]={
					0,2,1,
					2,1,1,
					3,1,2
				};
	display(&a[0]);
	display(&b[0]);
	multiply(&a[0],&b[0]);
	display(&a[0]);
	display(&b[0]);
}

void multiply(int (*m1)[3],int (*m2)[3])
{
	int c[3][3]={0};
	display(&c[0]);
	int i,q,j;
	
	for(i=0;i<=2;i++)
	{
		for(q=0;q<=2;q++)
		{
			for(j=0;j<=2;j++)
			{
				c[i][q]=c[i][q]+m1[i][j]*m2[j][q];
			}
		}
	}
	display(&c[0]);
}

void display(int (*p)[3])
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			std::cout<<p[i][j]<<" ";
		}
		std::cout<<'\n';
	}
	std::cout<<"\n\n";
}

