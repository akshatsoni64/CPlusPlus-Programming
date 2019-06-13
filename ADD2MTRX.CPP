#include<iostream.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],s[2][2],i,j;

	clrscr();

	cout<<"Enter 4 Numbers  (4 Numbers): ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter 4 Numbers  (4 Numbers): ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}

	cout<<"\nAddition : \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
			cout<<s[i][j]<<"\t";
		}
		cout<<endl;
	}

	getch();
}