#include"59_2.h"

int main()
{
	matrix m1,m2,m3,m4;
	std::cout<<"Enter matrix 1\n";
	m1.getdata();
	std::cout<<"Enter matrix 2\n";
	m2.getdata();
	std::cout<<"\n\n";
	m3=m1.operator+(m2);
	m4=m1.operator*(m2);
	
	m1.display();
	m2.display();
	m3.display();
	m4.display();
}


