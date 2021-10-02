#ifndef header
#define header

struct user
{
	private:
		int id,ph_no,debit_no;
		char name[40];
		static int count;
	public:
		user(int=0,int=0,int=0,const char *s=nullptr);
		void display();
		static void check_count();
	
};

#endif
