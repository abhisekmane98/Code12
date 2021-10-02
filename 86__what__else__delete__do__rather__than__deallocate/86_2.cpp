#include<iostream>

struct complex
{
	int r,i;
	complex(int,int);
	~complex();
};
complex::complex(int a,int b)
{
	r=a;
	i=b;
}
complex::~complex()
{
	std::cout<<"hey destructor gets callled\n";
}

int main()
{
	complex c1(3,5);
	complex *p=&c1;
	
	std::cout<<c1.r<<","<<c1.i<<std::endl;
	delete p;
	std::cout<<c1.r<<","<<c1.i;
}
