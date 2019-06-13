#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		static int a;
	public:
		demo()
		{
			++a;
		}
		static void put_a()
		{
			cout<<endl<<"No. of Objects : "<<a;
		}
};

int demo::a;

void main()
{
	clrscr();

	demo d[10];

	demo::put_a();

	getch();
}