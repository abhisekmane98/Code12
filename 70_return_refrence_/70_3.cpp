#include<iostream>

int add(int&,int&);

int main()
{
	add(2,3)=25;    // value of r now is 25 you can check by adress
	
}

int add(int &p,int &q)
{
	
	std::cout<<&r<<std::endl;
	return r;
}
