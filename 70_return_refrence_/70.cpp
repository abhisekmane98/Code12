#include<iostream>

int& add(int,int);

int main()
{
	std::cout<<&( add(2,3));
}

int& add(int p,int q)
{
	static int r=p+q;
	std::cout<<&r<<" "<<r<<std::endl; // 0x4a7040
	return r;
}


