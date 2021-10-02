#include<iostream>
#include<cstring>

int main()
{
	char s[]="30/4/2021";     
	std::cout<<(void*)s<<"\n";    // 0x70fdf0
	
	char *p1=(char*)0x70fdf0;
	std::cout<<p1<<"\n";
	
	char *p2=strtok(s,"/");
	std::cout<<(void*)p2<<"\n";
	std::cout<<p2<<"\n";
	
	char *p3=(char*)0x70fdf0;
	std::cout<<p3<<"\n";
	
	for(int i=0;i<=9;i++)
	{
		std::cout<<*p1;
		p1++;
	}
	
}
