#ifndef header
#define header
class product;
class item
{
	private:
		int a,b;
	public:
		item();
		item(int,int);
		void display_item(void);
		
		item(product);
	//	void operator=(product);
};

class product
{
	private:
		int p,q;
	public:
		product();
		product(int,int);
		void display_product(void);
		int getp();
		int getq();
		
		operator item();
	
};

#endif
