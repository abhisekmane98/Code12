#include"68_3.h"

circle::circle(int p,float x,float y)   // constructor
{
	std::cout<<"constructor gets called\n";
	r=p;
	cx=x;
	cy=y;
	std::cout<<r<<" ("<<cx<<","<<cy<<")\n";
}
circle::circle(circle &c)  // copy constructor
{
	std::cout<<"copy constructor is called\n";
	r=c.r;
	cx=c.cx;
	cy=c.cy;
	std::cout<<r<<" ("<<cx<<","<<cy<<")\n";
}
circle circle::operator=(circle c)    // overloading of assignment operator
{
	std::cout<<"overloaded assignemnt operator is called\n";
	r=c.r;
	cx=c.cx;
	cy=c.cy;
	return *this;
	std::cout<<r<<" ("<<cx<<","<<cy<<")\n";
}
void circle::display()
{
	std::cout<<r<<std::endl<<cx<<","<<cy<<"\n\n";
}
