#include<iostream>

struct block
{
	int a,b,c;
	int *p=new int[5];
};
int main()
{
	std::cout<<sizeof(block);
}
