#include"52.h"

complex::complex(int p,int q)
{
	r=p;
	i=q;
}

void complex::display()
{
	std::cout<<"("<<r<<","<<i<<")\n";
}
