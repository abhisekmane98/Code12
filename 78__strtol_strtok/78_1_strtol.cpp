#include<iostream>

int main()
{
	char s[]="30/4/2021",*end,*end2;
	int d=strtol(s,&end,10);
	end++;
	int m=strtol(end,&end2,10);
	end2++;
	int y=strtol(end2,nullptr,10);
	
	std::cout<<d<<"/"<<m<<"/"<<y<<std::endl;
}
