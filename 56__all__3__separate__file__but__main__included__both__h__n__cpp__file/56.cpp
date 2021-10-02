#include"56.h"
complex::complex(int p,int q)
{
	r=p;
	i=q;
}

void complex::display() 
{
	std::cout<<"("<<r<<","<<i<<")\n";
}

complex complex::operator++()
{
	++r;
	++i;
	return *this;
}

complex complex::operator++(int)
{
	r++;
	i++;
	return *this;
}
