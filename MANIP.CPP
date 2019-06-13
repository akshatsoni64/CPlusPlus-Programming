#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	int x=1234;
	float y=1.2345;
	char a[10]="Computer";

	clrscr();

	cout<<"\nUse of endl : \n";
	cout<<x<<endl<<a<<endl;

	cout<<"\nUse of setw() : \n";
	cout<<setw(5)<<x<<endl;
	cout<<setw(10)<<a<<endl;

	cout<<"Use of setfill() : \n";
	cout<<setfill('@')<<setw(5)<<x<<endl;
	cout<<setfill('@')<<setw(10)<<a<<endl;

	cout<<"\nUse of setprecision() : \n";
	cout<<setprecision(3)<<y;

	getch();
}