#include<iostream.h>
#include<conio.h>

int sqr(int x)
{
	int y;
	y=x*x;
	return y;
}

void main()
{
	int a;
	int &b=a;

	clrscr();

	cout<<"Enter Number : ";
	cin>>b;
	cout<<sqr(b);

	getch();
}