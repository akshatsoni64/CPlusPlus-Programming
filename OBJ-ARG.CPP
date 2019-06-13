#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		int a;
	public:
		void get_a(int x)
		{
			a=x;
			cout<<endl<<"A = "<<a;
		}
		void copy(demo d)
		{
			a=d.a;
		}
		void putc()
		{
			cout<<endl<<"A Copied : "<<a;
		}
};

void main()
{
	demo d1,d2;

	clrscr();

	d1.get_a(12);
	d2.copy(d1);
	d2.putc();

	getch();
}