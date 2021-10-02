#include"72_1.h"
#include<iostream>
#include<cstring>

string::string()
{
	str[0]='\0';
}

string::string(const char *s)
{
	strcpy(str,s);
}

/*string::string(int a)
{
	itoa(a,str,10);
}*/
void string::operator=(int n)
{
	itoa(n,str,10);
}

/*void string::operator=(string s)
{
	strcpy(str,s.str);
}*/

void string::display()
{
	std::cout<<str<<std::endl;
}
