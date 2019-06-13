#include<iostream.h>
#include<conio.h>

void main()
{
	int a[10],n,i,v;
	clrscr();
	cout<<"Enter Array Size : ";
	cin>>n;

	cout<<"Enter "<<n<<" Numbers : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"Enter the Value to Search : ";
	cin>>v;

	for(i=0;i<n;i++)
	{
		if(v==a[i])
		{
			break;
		}
	}

	cout<<"Value found at a["<<i<<"]";

	getch();
}