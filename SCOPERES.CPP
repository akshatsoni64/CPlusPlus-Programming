#include<iostream.h>
#include<conio.h>

int x=10;

void main()
{
	int x=20;

	clrscr();
	cout<<"Scope Resolution : ";
	cout<<::x<<endl;
	cout<<x;

	getch();
}