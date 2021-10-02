#include"60_2.h"

time::time()
{
	hr=0;
	m=0;
}

void time::set_time()
{
	//std::cout<<"Enter hr and minute\n";
	hr=10;
	m=45;
}

time time::operator++()
{
	m++;
	return *this;
}

void time::display()
{
	std::cout<<hr<<"::"<<m<<"::"<<"00\n";
}
