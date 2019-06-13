#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		int a,b;
	public:
		demo(){}
		demo(int x,int y=10)
		{
			a=x;
			b=y;
		}
		demo(demo &i)
		{
			a=i.a+1;
			b=i.b+1;
		}
		void put()
		{
			cout<<endl<<"A = "<<a;
			cout<<endl<<"B = "<<b<<endl;
		}
};

void main()
{
	clrscr();

	demo d1(5);
	cout<<"\nD1 : ";
	d1.put();

	demo d2(d1);
	cout<<"\nD2 : ";
	d2.put();

	getch();
}