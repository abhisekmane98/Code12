#include"72_3.h"
#include<iostream>
#include<cstring>

line::line()
{
	ch[0]='\0';
}

line::line(const char *s)
{
	strcpy(ch,s);
}

/*void line::operator=(int n)
{
	std::cout<<"overloaded = operator used\n";
	itoa(n,ch,10);
}*/

line::line(int n)
{
	std::cout<<"constructor used\n";
	itoa(n,ch,10);
}

void line::display()
{
	std::cout<<ch<<std::endl;
}

