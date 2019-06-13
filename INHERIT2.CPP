#include<iostream.h>
#include<conio.h>

class B
{
	private:
		int b;
	public:
		B(int y)
		{
			b=y;
			cout<<"B : "<<b<<endl;
		}
};

class C:public B
{
	private:
		int c;
	public:
		C(int z,int y) :B(y)
		{
			c=z;
			cout<<"C : "<<c;
		}
};

void main()
{
	clrscr();

	C c1(1000,200);

	getch();
}