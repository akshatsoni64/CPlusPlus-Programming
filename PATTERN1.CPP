#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,k;

	clrscr();

	for(i=0;i<5;i++)
	{
		for(k=i;k<5;k++)
		{
			cout<<"\t";
		}

		for(j=0;j<i;j++)
		{
			cout<<i<<"\t";
		}
		cout<<endl;
	}

	getch();
}