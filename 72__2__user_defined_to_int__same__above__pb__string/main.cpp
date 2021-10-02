#include"72_2.h"
#include<iostream>

int main()
{
	string s1,s2="24";
	
	s1.display();
	s2.display();
	
//  ERROR 	
//  int n=s2;       s2.operator=(n);
//  overloading of = operator

//  WORKS
//	int n=(int)s2;  n=s2.operator int(); 
//  overloading of typecasting operator  

// calls only overloaded typecasting operator as it can't find overloaded assignment operator
	int n=s2;      
	std::cout<<n;
}
