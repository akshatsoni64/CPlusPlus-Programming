#include<iostream.h>
#include<conio.h>

class time
{
	private:
		int h,m,s;
	public:
		void get();
		void put();
};

void time::get()
{
	cout<<"Enter Time in 24 Hours Fromat";

	cout<<endl<<endl<<"Hours :";
	cin>>h;

	cout<<"Minutes : ";
	cin>>m;

	s=30;
}

void time::put()
{
	if(h>12)
	{
		cout<<endl<<h-12<<":"<<m<<":"<<s<<" PM";
	}
	else
	{
		cout<<endl<<h<<":"<<m<<":"<<s<<" AM";
	}
}

void main()
{
	time t;

	clrscr();

	t.get();
	t.put();
	getch();
}