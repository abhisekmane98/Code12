#include"72_4.h"
#include<stdlib.h>
#include<cstring>

line::line()
{
	s[0]='\0';
}
line::line(const char *s2)
{
	strcpy(s,s2);
}

line::operator int()
{
	int n=atoi(s);
	return n;
}
