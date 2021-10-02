#include<iostream>

int main()
{
	std::string s;
	char ch=97;
	
	int i;
	for(i=0;i<=4;i++)
	{
		s[i]=ch++;
	}
	s[i]='\0';
	std::cout<<s;
	std::cout<<s[3];
}
