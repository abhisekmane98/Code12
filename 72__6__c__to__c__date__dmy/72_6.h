#ifndef header
#define header

class Dmy;

class date
{
	private:
		char s[11];
	public:
		date();
		date(const char*);
		void display_date(void);
		
	//	char* get_string(void);
	//	operator Dmy();
	
	//	void operator=(Dmy);
	//	date(Dmy);
};

class Dmy
{
	private:
		int d,m,y;
	public:
		Dmy();
		Dmy(int,int,int);
		void display_Dmy(void);
		
		int get_d(void);
		int get_m(void);
		int get_y(void);
		
	//	Dmy(date);
	//	void operator=(date);
	    operator date(void);
		
		
}; 

#endif
