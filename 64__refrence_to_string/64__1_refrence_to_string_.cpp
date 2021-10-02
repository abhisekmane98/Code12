#include<iostream>

void add(std::string&);

int main()
{
	std::string s="bonapart";
	add(s);
}

void add(std::string &p)
{
	std::cout<<p;
}
