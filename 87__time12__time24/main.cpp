#include"87.h"
#include<iostream>

int main()
{
	time12 t1(2,45,23,"PM"),t2;
	Time24 T1(13,20,59),T2;
	
//	t2=T1;  // t2.operator=(T2);   t2(T2) copy constructor
//	t2=(time12)T1;  // t2=T1.operator time12();

//	T2=t1;  // T2.operator=(t1);   T2(t1);
	T2=(Time24)t1;   // T2=t1.operator Time24()
		
	T2.display_Time24();
}
