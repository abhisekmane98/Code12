#include"63_2.h"

int user::count=0;

user::user(int p,int q,int r,std::string s)
{
	id=p;
	ph_no=q;
	debit_no=r;
	name=s;
	count++;
}

void user::display()
{
	std::cout<<id<<std::endl<<ph_no<<std::endl<<debit_no<<std::endl<<name<<std::endl<<count<<std::endl;
}
void user::check_count()
{
	if(count>=3)
	{
		std::cout<<"your netflix account is looged in on"<<count<<"  account so to use it first log out from there\n";
	}
	
}

