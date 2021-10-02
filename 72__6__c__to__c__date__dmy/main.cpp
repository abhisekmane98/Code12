#include"72_6.h"
#include<iostream>

int main()
{
	Dmy D1,D2(30,4,2021);
	date d3,d4="15/7/1769";
	
	// D1=d4; // D1.operator=(d8)   D1(d4)
	//D1=(Dmy)d4; // typecasting overload   D1=d4.operator Dmy();
	//D1.display_Dmy();
	
	//d3=D2;  // d3.operator=(D2);  d3(D2);
	d3=(date)D2;    // d3=D2.operator date();
	d3.display_date();
	
}
