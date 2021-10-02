#include<iostream>

int main()
{
	int a=3;
	int *p=&a;
	std::cout<<*p<<"\n";
	delete p;
	std::cout<<*p;
}
