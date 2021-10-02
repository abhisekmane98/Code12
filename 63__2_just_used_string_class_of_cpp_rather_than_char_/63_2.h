#ifndef header
#define header

#include<iostream>
#include<cstring>

struct user
{
	private:
		int id,ph_no,debit_no;
		std::string name;
		static int count;
	public:
		user(int=0,int=0,int=0,std::string="");
		void display();
		static void check_count();
	
};

#endif
