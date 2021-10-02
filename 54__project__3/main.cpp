#include"54.h"

int main()
{
	complex c1,c2(3,4),c3,c4;
	c1.display();
	c2.display();
	c3=++c1;
	c4=c2++;
	std::cout<<"\n";
	c1.display();
	c2.display();
	c3.display();
	c4.display();
}
