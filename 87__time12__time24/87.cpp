#include"87.h"
#include<iostream>
#include<cstring>
#include<conio.h>

time12::time12()
{
	h=0;
	m=0;
	s=0;
}
time12::time12(int a,int b,int c,const char*str2)
{
	h=a;
	m=b;
	s=c;
	strcpy(str,str2);
}
void time12::display_time12()
{
	std::cout<<h<<"::"<<m<<"::"<<s<<" "<<str<<"\n";
}
/*void time12::operator=(Time24 T)
{
	h=T.geth();
	int temp=h;
	if(h>=0 && h<=12)
	{
	
	}
	else // (h>=13 && h<=24)
	{
		h=h-12;
	}
	m=T.getm();
	s=T.get_s();
	
	if(temp>=0 && temp<=11)
	{
		strcpy(str,"AM");
	}
	else // (temp<=12 && temp>=24)
	{
		strcpy(str,"PM");
	}
}*/
/*time12::time12(Time24 T)
{
	h=T.geth();
	int temp=h;
	if(h>=0 && h<=12)
	{
	
	}
	else // (h>=13 && h<=24)
	{
		h=h-12;
	}
	m=T.getm();
	s=T.get_s();
	
	if(temp>=0 && temp<=11)
	{
		strcpy(str,"AM");
	}
	else // (temp<=12 && temp>=24)
	{
		strcpy(str,"PM");
	}
	
}*/

/*int time12::geth()
{
	return h;
}
int time12::getm()
{
	return m;
}
int time12::get_s()
{
	return s;
}
char* time12::get_str()
{
	return str;
}*/
time12::operator Time24()
{
	if( strcmp(str,"AM")==0 )
	{
		
		if(h>=1 && h<=11)       // 0::30::00 AM never  in 12 hrs clock 12.30 AM
		{
			
		}
		else // h==12           there is no 0 in 12hrs clock so i never get h=0
		{
			h=h-12;
		}
		
	}
	else
	{
	
		if(h>=1 && h<=11)
		{
			h=h+12;
		}
		else  // h==12          no 0 in 12hrs clock 
		{
			
		}
	}
	
	Time24 T(h,m,s);
	return T;
}






Time24::Time24()
{
	h=0;
	m=0;
	s=0;
}
Time24::Time24(int a,int b,int c)
{
	h=a;
	m=b;
	s=c;
}
void Time24::display_Time24()
{
	std::cout<<h<<"::"<<m<<"::"<<s<<"\n";
}
/*int Time24::geth()
{
	return h;
}
int Time24::getm()
{
	return m;
}
int Time24::get_s()
{
	return s;
}*/

/*Time24::operator time12()
{
	int temp=h;
	if(h>=13 && h<=24)
	{
		h=h-12;
	}
	else
	{
		
	}
	char str[3];
	if(temp>=12 && temp<=24)
	{
		strcpy(str,"PM");
	}
	else
	{
		strcpy(str,"AM");
		
	}
	time12 t(h,m,s,str);
	return t;
}*/

/*void Time24::operator=(time12 t)
{
	h=t.geth();  // 0 to 12
	m=t.getm();
	s=t.get_s();
	char *str=t.get_str();
	
	int k=strcmp(str,"AM");
	if(k==0)  
	{
		if(h>=0 && h<=11)
		{
			
		}
		else // h==12
		{
			h=h-12; // h=0;
		}
	}
	else 
	{
		if(h>=1 && h<=11)  // h=0    00::30::29 PM     its  never 
		{
			h=h+12;
		}
		if(h==12)            // else  will not work as it contains h=0
		{
			
		}
		
	}
	// h is modifed
		
}*/

/*Time24::Time24(time12 t)
{
		h=t.geth();  // 0 to 12
	m=t.getm();
	s=t.get_s();
	char *str=t.get_str();
	
	int k=strcmp(str,"AM");
	if(k==0)  
	{
		if(h>=0 && h<=11)
		{
			
		}
		else // h==12
		{
			h=h-12; // h=0;
		}
	}
	else 
	{
		if(h>=1 && h<=11)  // h=0    00::30::29 PM     its  never 
		{
			h=h+12;
		}
		if(h==12)            // else  will not work as it contains h=0
		{
			
		}
		
	}
	// h is modifed
		
}*/














