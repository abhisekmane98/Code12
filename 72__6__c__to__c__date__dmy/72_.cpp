#include"72_6.h"
#include<iostream>
#include<cstring>

date::date()
{
	s[0]='\0';
}
date::date(const char *p)
{
	strcpy(s,p);
}
void date::display_date()
{
	std::cout<<s<<std::endl;
}

/*char* date::get_string()
{
	return s;
}*/
/*date::operator Dmy()
{

	char *end,*end2;
	int d,m,y;
	
	d=strtol(s,&end,10);
	
	end++;
	m=strtol(end,&end2,10);
	
	end2++;
	y=strtol(end2,nullptr,10);
	
	Dmy D1(d,m,y);
	return D1;
	
}*/
/*void date::operator=(Dmy D1)
{
	
	  int d,m,y;
	  char s1[3],s2[3],s3[3];
	  
	  d=D1.get_d();
	  m=D1.get_m();
	  y=D1.get_y();
	  
	  itoa(d,s1,10);
	  itoa(m,s2,10);
	  itoa(y,s3,10);
	  
	  strcat(s,s1);
	  strcat(s,"/");
	  
	  strcat(s,s2);
	  strcat(s,"/");
	  
	  strcat(s,s3);
	  	  
}*/
/*date::date(Dmy D1)
{
	
	  int d,m,y;
 	  char s1[3],s2[3],s3[3];
	  
	  d=D1.get_d();
	  m=D1.get_m();
	  y=D1.get_y();
	  
	  itoa(d,s1,10);
	  itoa(m,s2,10);
	  itoa(y,s3,10);
	  
	  strcat(s,s1);
	  strcat(s,"/");
	  
	  strcat(s,s2);
	  strcat(s,"/");
	  
	  strcat(s,s3);
	  
}*/




Dmy::Dmy()
{
	d=0;
	m=0;
	y=0;
}
Dmy::Dmy(int p,int q,int r)
{
	d=p;
	m=q;
	y=r;
}
void Dmy::display_Dmy()
{
	std::cout<<d<<"/"<<m<<"/"<<y<<std::endl;
}

int Dmy::get_d()
{
	return d;
}

int Dmy::get_m()
{
	return m;
}

int Dmy::get_y()
{
	return y;
}

/*Dmy::Dmy(date d1)
{
	char s[11];
	strcpy(s,d1.get_string() );
	
	const char *p1,*p2,*p3;
	
	p1=strtok(s,"/");
	p2=strtok(nullptr,"/");
	p3=strtok(nullptr,"/");
	
	d=atoi(p1);
	m=atoi(p2);
	y=atoi(p3);
}*/
/*void Dmy::operator=(date d1)
{
	char s[11];
	strcpy(s,d1.get_string() );
	
	char *end,*end2;
	
	d=strtol(s,&end,10);
	
	end++;
	m=strtol(end,&end2,10);
	
	end2++;
	y=strtol(end2,nullptr,10);
}*/
Dmy::operator date()
{
	char s[11];
	char s1[3],s2[3],s3[3];
	itoa(d,s1,10);
	itoa(m,s2,10);
	itoa(y,s3,10);
	
	strcat(s,s1);
	strcat(s,"/");
	  
	strcat(s,s2);
	strcat(s,"/");
	  
	strcat(s,s3);
	
	date d1(s);
	return d1;
}





