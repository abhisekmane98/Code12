#include<iostream>

int add(int&,int&);

int main()
{
	int	&k=add(2,3);
	std::cout<<&k;
}

int add(int &p,int &q)
{
	
	std::cout<<&r<<std::endl;
	return r;
}
