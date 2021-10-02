#include"72_5.h"
#include<iostream>

item::item()
{
	a=0;
	b=0;
}
item::item(int x,int y)
{
	a=x;
	b=y;
}
void item::display_item()
{
	std::cout<<a<<","<<b<<'\n';
}
item::item(product p1)
{
	a=p1.getp();
	b=p1.getq();
}
/*void item::operator=(product p1)
{
	a=p1.getp();
	b=p1.getq();
}*/



product::product()
{
	p=0;
	q=0;
}
product::product(int x,int y)
{
	p=x;
	q=y;
}
void product::display_product()
{
	std::cout<<p<<","<<q<<'\n';
}
int product::getp()
{
	return p;
}
int product::getq()
{
	return q;
}
product::operator item()
{
	item i(p,q);
	return i;
	
}




