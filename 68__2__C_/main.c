#include"68.h"

int main()
{
	circle c1,c2(5,2,3),c3;
	
	c1=c3=c2;  //	std::cout<<&c3<<std::endl<<&(c3=c2)<<endl;
	
	circle c4=c2;
	
	c1.display();
	c2.display();
	c3.display();
	c4.display();
}#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
}
