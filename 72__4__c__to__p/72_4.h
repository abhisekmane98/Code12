#ifndef header
#define header

class line
{
	private:
		char s[20];
	public:
		line();
		line(const char*);
		
		operator int();
};

#endif
