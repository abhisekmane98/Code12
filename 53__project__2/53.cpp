#include"53.h"

complex::complex(int p,int q)
{
	r=p;
	i=q;
}

void complex::showdata()
{
	std::cout<<"("<<r<<","<<i<<")\n";
}
