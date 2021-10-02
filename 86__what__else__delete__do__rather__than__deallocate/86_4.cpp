#include<iostream>

struct complex
{
	int r,i;
	~complex();
};

complex::~complex()
{
	std::cout<<"hey destructor gets callled\n";
}


int main()
{
	complex *p=new complex;
	p->r=3;
	p->i=2;
	
	std::cout<<p->r<<","<<p->i<<std::endl;
	delete p;
	std::cout<<p->r<<","<<p->i;
}
