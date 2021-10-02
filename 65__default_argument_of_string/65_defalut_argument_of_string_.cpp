#include<iostream>

void fun(int=0,const char* =nullptr);
int main()
{
	fun(2,"rohana");
}

void fun(int p,const char *s)
{
	std::cout<<p<<std::endl<<s;
}
