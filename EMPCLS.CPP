#include<iostream.h>
#include<conio.h>

class emp
{
	private:
		int eno;
		char name[30];
	public:
		void get();
		void put();
};

void emp::get()
{
	cout<<"Enter your No. , Name\nNo. : ";
	cin>>eno;
	cout<<"Name : ";
	cin>>name;
}

void emp::put()
{
	cout<<endl<<"Employee No. : "<<eno<<endl;
	cout<<"Employee Name : "<<name;
}

void main()
{
	emp e;

	clrscr();

	e.get();
	e.put();

	getch();
}