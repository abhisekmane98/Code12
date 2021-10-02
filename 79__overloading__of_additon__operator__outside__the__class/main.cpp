#include"79.h"
#include<iostream>

int main()
{
	complex c1(2,3),c2(7,1),c3;
	c3=c1+c2;
	std::cout<<c3.r<<","<<c3.i;
}
