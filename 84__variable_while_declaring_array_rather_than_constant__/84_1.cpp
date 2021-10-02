#include<iostream>

int main()
{
	int n=5;
	int a[n]={2,3,7,1,9}; // variable sized array is not present in C++
	                    // in C you can't intialize VLA while declaration
	for(int i;i<=4;i++)
	{
		std::cout<<a[i]<<" ";
	}
}
