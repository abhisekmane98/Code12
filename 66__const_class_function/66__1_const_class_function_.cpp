#include<iostream>

class complex
{
	public:
		int r,i;
	
		complex(int p=0,int q=0)
		{
			r=p;
			i=q;
		}
		void change_data() const
		{
			r=7;
			i=7;
		}
		void display()
		{
			std::cout<<r<<","<<i<<std::endl;
		}
		
};

int main()
{
	const complex c1(2,3),c2,c3;
	int const a=3,b=2;
	
	c2.r=5;
	c2.i=5;
	b=5;
	
}
