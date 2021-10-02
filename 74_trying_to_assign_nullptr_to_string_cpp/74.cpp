#include<iostream>

int main()
{
	std::string s;
	char *p=nullptr;
	s=p;
	if(s==p)
	{
		std::cout<<"hey";
	}
	else
	{
		std::cout<<"bye";
	}
}
