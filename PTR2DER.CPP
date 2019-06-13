#include<iostream.h>
#include<conio.h>

class Base
{
	private:
		int b;
	public:
		virtual void show(int x)
		{
			b=x;
			cout<<"B : "<<b<<endl;
		}
};

class Derived:public Base
{
	private:
		int d;
	public:
		void show(int y)
		{
			d=y;
			cout<<"D : "<<d<<endl;
		}
};

void main()
{
	clrscr();

	Base *ptr;
	Base b1;
	Derived d1;

	ptr=&b1;
	ptr->show(10);

	ptr=&d1;
	ptr->show(20);

	getch();
}