#include<iostream.h>
#include<conio.h>

int lenstr(const char a[])
{
	int i,l=0;
	for(i=0;a[i]!=0;i++)
	{
		l++;
	}
	return l;
}

void main()
{
	char a[100];

	clrscr();

	cout<<"Enter String : ";
	cin>>a;

	cout<<"Length of String : "<<lenstr(a);

	getch();
}