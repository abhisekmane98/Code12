#ifndef header
#define header

#include<iostream>

class circle
{
	private:
		int r;
		float cx,cy;
	public:
		circle(int=0,float=0.0,float=0.0);   // constructor
		circle(circle&); // copy constructor
	//	void operator=(circle c); // overloaded assignment operator
		void display();  
		
};

#endif
