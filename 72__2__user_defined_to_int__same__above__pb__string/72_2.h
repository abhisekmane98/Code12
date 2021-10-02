#ifndef header
#define header

struct string
{
	 private:
	 	char str[20];
	 public:
	 	string(const char *s=nullptr);
	    operator int();             // overloading typecasting operator
		 //	int operator int();     // ERROR: we are specifying which is done by compiler
		
         //  void operator=(int&); // ERROR: operator overloading  
	 	void display();
};

#endif
