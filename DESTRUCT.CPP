#include<iostream.h>
#include<conio.h>

int count=0;

class demo
{
	public:
		demo()
		{
			cout<<endl<<"Constructor : ";
			cout<<"Object "<<++count<<" Created";
			getch();
		}

		~demo()
		{
			cout<<endl<<"Destructor : ";
			cout<<"Object "<<count--<<" Destroyed";
			getch();
		}
};

void main()
{
	clrscr();

	cout<<endl<<"Welcome to Main() Function : "<<endl;

	demo d1,d2,d3;

	cout<<endl<<endl<<"Execution going out of Main() Function!!!"<<endl;
}