#include<iostream>

struct time
{
	private:
		int hr,m;
	public:
		time();
		void set_time();
		time operator++();
		void display();
};

