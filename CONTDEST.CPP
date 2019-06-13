#include<iostream.h>
#include<conio.h>

class demo
{
	private:
		static c;
		int a,b;
	public:
		demo()
		{
			//In Default Constructor
		}

		demo(int d1,int d2)
		{
			//In Parameterized Constructor
			a=d1;
			b=d2;
		}

		demo(demo &x)
		{
			//In Copy Constructor
			a=x.a;
			b=x.b;
		}

		void show()
		{
			cout<<endl<<"Class : Demo"<<endl<<endl<<"Object "<<++c<<" :\n";
			cout<<"A : "<<a<<endl;
			cout<<"B : "<<b<<endl;
		}

		~demo(){}
};

int demo::c;

class principal
{
	private:
		int p,r,t;
	public:
		principal(){}

		principal(int pr,int ti,int ra=3)
		{
			//Constructor with Default Arguements
			p=pr;
			t=ti;
			r=ra;
		}
		void si()
		{
			int s;
			s=(p*r*t)/100;
			cout<<endl<<"Class : Principal"<<endl;
			cout<<endl<<"Principal : "<<p;
			cout<<endl<<"Rate of Interest : "<<r;
			cout<<endl<<"Time : "<<t;
			cout<<endl<<endl<<"Simple Interest : "<<s;
		}
};

void main()
{
	clrscr();

	demo d;

	demo d1(10,20);
	d1.show();

	demo d2(d1);
	d2.show();

	//getch();

	//clrscr();

	principal p(1000,2);
	p.si();

	getch();
}