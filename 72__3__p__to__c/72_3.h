#ifndef header
#define header

class line
{
	private:
		char ch[20];
	public:
		line();
		line(const char *s);
		
	//	void operator=(int);
		line(int n);
		
		void display();		
};

#endif
