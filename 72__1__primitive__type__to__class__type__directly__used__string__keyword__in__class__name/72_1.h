#ifndef header
#define header


class string
{
	private:
		char str[20];
	public:
		string(void);
		string(const char*s);
		//string(int a);
		void operator=(int);
		//void operator=(string);
		void display();
};

#endif
