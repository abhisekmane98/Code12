#include<iostream>

void add(std::string&);

int main()
{
	add("bonapart");
}

void add(std::string &p)
{
	std::cout<<p;
}
