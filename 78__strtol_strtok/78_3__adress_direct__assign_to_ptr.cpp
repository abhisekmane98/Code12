#include<iostream>
#include<cstring>

int main()
{
	char s[]="30/4/2021";  // 0x70fe10
	
	std::cout<<(void*)s<<"\n";
	std::cout<<&s<<"\n";
	std::cout<<s<<"\n\n";
	
	char *p3=(char*)0x70fe10;
	
	std::cout<<(void*)p3<<"\n";
	std::cout<<&p3<<"\n";
	std::cout<<p3<<"\n";
	
}
