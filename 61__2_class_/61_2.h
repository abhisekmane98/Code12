#ifndef header
#define header

struct complex
{
	private:
		int r,i;
	public:
		complex(int=0,int=0);
		void get_data();
		void display();
};

#endif
