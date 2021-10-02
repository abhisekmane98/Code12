#include"81.h"
#include<iostream>

complex::complex(int a,int b)
{
	r=a;
	i=b;
}

complex::~complex()
{
	std::cout<<"destructor runs\n";
}
