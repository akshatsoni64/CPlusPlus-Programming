#include<iostream.h>
#include<conio.h>

class B
{
	private:
		int b;
	public:
		int get_b();
};

class D1:public virtual B
{
	private:
		int d1;
	public:
		int get_d1();
};

class D2:public virtual B
{
	private:
		int d2;
	public:
		int get_d2();
};

class sum:public D1,public D2
{
	private:
		int s;
	public:
		int set_s()
		{
			s=get_b()+get_d1()+get_d2();
			return s;
		}
		void add()
		{
			cout<<endl<<"B : "<<get_b();
			cout<<endl<<"D1 : "<<get_d1();
			cout<<endl<<"D2 : "<<get_d2();
			cout<<endl<<endl<<"Sum = "<<set_s();
		}
};

class avg:public sum
{
	private:
		int Avg;
	public:
		void average()
		{
			Avg=(set_s())/3;
			cout<<endl<<"Average : "<<Avg;
		}
};

int B::get_b()
{
	b=10;
	return b;
}

int D1::get_d1()
{
	d1=20;
	return d1;
}

int D2::get_d2()
{
	d2=30;
	return d2;
}

void main()
{
	avg s1;

	clrscr();

	s1.get_b();
	s1.get_d1();
	s1.get_d2();

	s1.add();
	s1.average();

	getch();
}