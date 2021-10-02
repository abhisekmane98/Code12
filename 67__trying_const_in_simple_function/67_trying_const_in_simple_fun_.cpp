#include<iostream>

void fun(int*) const;
int main()
{
	int a=4;
	fun(&a);
	std::cout<<a;
}

void fun(int *p) const
{
	*p=6;
}
