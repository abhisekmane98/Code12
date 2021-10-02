#include"79.h"

complex::complex()
{
	r=0;
	i=0;
}

complex::complex(int a,int b)
{
	r=a;
	i=b;
}

complex& operator+(complex &c1,complex &c2)   // this is not member function 
{
	static complex c3(c1.r+c2.r,c1.i+c2.i);
	return c3;
}
