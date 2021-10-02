#include"72_2.h"
#include<iostream>
#include<cstring> 

string::string(const char *s) 
{
	if(s==nullptr)
	{
		str[0]='\0';
	}
	else
	{
		strcpy(str,s);
	}
	
}
string::operator int()
{
	std::cout<<"used overloaded typecasting operator\n";
	int n=atoi(str);
	return n;
}

/*void string::operator=(int &p)
{
	p=atoi(str);
}*/

void string::display()
{
	std::cout<<str<<std::endl;
}
