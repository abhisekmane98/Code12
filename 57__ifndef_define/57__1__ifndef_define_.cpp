#include<iostream>

//#define Myfile 0
//#define k 
int main()
{
	#ifndef Myfile
		std::cout<<"Myfile is not defined\n";
		#define Myfile 4
		std::cout<<"now i defined it\n"<<Myfile<<"\n";
		
	#else
		std::cout<<"defined already\n"<<Myfile<<"\n";
	#endif
	
	#ifndef k
		std::cout<<"K is not defined\n";
	#else
		std::cout<<"k is defined already\n";
	#endif
}
