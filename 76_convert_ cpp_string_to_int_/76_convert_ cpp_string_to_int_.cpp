#include<iostream>

int main()
{
	std::string s="492king";
	
	size_t end;
	int n=stoi(s,&end,0);
	
	std::cout<<n<<std::endl;
	std::cout<<s<<std::endl;
	std::cout<<end<<std::endl;
	std::cout<<s.substr(end);
}
