#include"72_5.h"
#include<iostream>

int main()
{
	item i1,i2(2,3);
	product p1,p2(7,1);
	
	//i1=p2;  // i1.operator=(p2);
	i1=(item)p2;  // p2.operator item();
	i1.display_item();
}
