#include<iostream>

struct complex
{
	private:
		int r,i;
	public:
		complex(int=0,int=0);
		void display(void);
		complex operator++();
		complex operator++(int);
};

complex::complex(int p,int q)
{
	r=p;
	i=q;
}

void complex::display() 
{
	std::cout<<"("<<r<<","<<i<<")\n";
}

complex complex::operator++()
{
	++r;
	++i;
	return *this;
}

complex complex::operator++(int)
{
	r++;
	i++;
	return *this;
}
