#include<stdio.h>

int main()
{
	int a=3,b=2,*p;
	p= &(b=a);
	
	printf("%u\n%u\n%u\n%d",&a,&b,p,*p);
	
}
