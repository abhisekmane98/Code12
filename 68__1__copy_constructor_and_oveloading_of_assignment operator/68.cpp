#include"68.h"

circle::circle(int p,float x,float y)
{
	std::cout<<"constructor gets called\n";
	r=p;
	cx=x;
	cy=y;
	std::cout<<r<<" ("<<cx<<","<<cy<<")\n";
}
circle::circle(circle &c)
{
	std::cout<<"copy constructor is called\n";
	r=c.r;
	cx=c.cx;
	cy=c.cy;
	std::cout<<r<<" ("<<cx<<","<<cy<<")\n";
}
/*void circle::operator=(circle c)
{
	std::cout<<"overloaded assignemnt operator is called\n";
	r=c.r;
	cx=c.cx;
	cy=c.cy;
	std::cout<<r<<" ("<<cx<<","<<cy<<")\n";
}*/
void circle::display()
{
	std::cout<<r<<std::endl<<cx<<","<<cy<<"\n\n";
}
