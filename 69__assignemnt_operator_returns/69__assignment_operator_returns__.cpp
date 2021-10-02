#include<iostream>

int main()
{
	int a=3,b=2,*p;
	p= &(b=a);
	
	std::cout<<&a<<" "<<a<<std::endl;
	std::cout<<&b<<" "<<b<<std::endl;
	std::cout<<p<<" "<<*p;
}
