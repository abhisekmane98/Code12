#include<iostream>

int main()
{
	int *p=new int;
	*p=3;
	std::cout<<*p<<"\n";
	delete p;
	std::cout<<*p;
}
