#ifndef header
#define header

#include<iostream>

struct matrix
{
	private:
		int a[3][3];
	public:
		matrix();
		void getdata();
		matrix operator+(matrix);
		matrix operator*(matrix);
		void display();
};

#endif
