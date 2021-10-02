#include"72_1.h"
#include<iostream>
int main()
{
	string s1="123",s2,s3; // s3(20);
	
	s1.display();
	s2.display();
	//s3.display();
	
	//s1=50;       constructor    // compiler doesn't find an oveloading=assignment operator so it looks for construc
					 // tor to do the same job
					 
	s1=50;  //   operator overloading  s1.operator=(50);
	s1.display();
	s3=s2=s1;  // s2.operator=(s1);
	s2.display();
	s3.display();
}
