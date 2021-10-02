#include<iostream>
#include<cstring>
int main()
{
	int n=752,i=0,r;
	char s[10];
	while(n!=0)
	{
		r=n%10;
		s[i]=r+48;
		i++;
		n=n/10;
	}
	s[i]='\0';
	strrev(s);
	
	std::string s2=s;
	std::cout<<s2;
}
