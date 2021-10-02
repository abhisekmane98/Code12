#include"61_2.h"

#include<iostream>

complex::complex(int p,int q)
{
	r=p;
	i=q;
}
void complex::get_data()
{
	std::cout<<"Enter real and imaginary part of complex no.\n";
	std::cin>>r>>i;
}
void complex::display()
{
	std::cout<<r<<","<<i<<"\n";	
}


