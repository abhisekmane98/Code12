#include<iostream>

class complex
{
	public:
		int r,i;
		complex(int=0,int=0);
		void change_data() const;
		void display();	
		
};

int main()
{
	const complex c1(2,3),c2,c3;
	int const a=3,b=2;
	
	c2.r=5;
	c2.i=5;
	b=5;
	
}

complex::complex(int p,int q)
{
	r=p;
	i=q;
}
void complex::change_data() const
{
	r=7;
	i=7;
}
void complex::display()
{
	std::cout<<r<<","<<i<<std::endl;
}



