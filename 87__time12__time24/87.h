#ifndef header
#define header
struct Time24;

struct time12
{
	private:
		int h,m,s;
		char str[3];
	public:
		time12();
		time12(int,int,int,const char*);
		void display_time12();
		
	//	void operator=(Time24);
	//	time12(Time24);
	
	//	int geth();
	//	int getm();
	//	int get_s();
	//	char* get_str();
		
		operator Time24();
};

struct Time24
{
	private:
		int h,m,s;
	public:
		Time24();
		Time24(int,int,int);
		void display_Time24();
		
	//	int geth();
	//	int getm();
	//	int get_s();  // gets() name function is already there
		
	//	operator time12();
		
	//	void operator=(time12);
	//	Time24(time12);
};

#endif
