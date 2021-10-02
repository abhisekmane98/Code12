#ifndef header
#define header

struct complex
{
	int r,i;
	complex();
	complex(int,int);
		
};

complex& operator+(complex&,complex&);

#endif

