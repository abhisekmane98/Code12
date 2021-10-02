#include<iostream>

int main()
{
	int *p=new int;
	*p=2;
	
	std::cout<<p<<"\n"<<*p<<std::endl;
	
	delete p;
	std::cout<<p<<"\n"<<*p;
}
