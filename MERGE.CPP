#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,m,n;

	clrscr();

	cout<<"Enter Size of 1st Array : ";
	cin>>m;

	int a[10];
	cout<<"Enter "<<m<<" Numbers : ";
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}

	cout<<"Enter Size of 2nd Array : ";
	cin>>n;

	int b[10];
	cout<<"Enter "<<n<<" Numbers : ";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}

	int c[20];
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=m;i<n,j<m+n;i++,j++)
	{
		c[j]=b[i];
	}

	clrscr();

	cout<<"After Merging : \n";
	for(i=0;i<m+n;i++)
	{
		cout<<"c["<<i<<"] = "<<c[i]<<endl;
	}
	getch();
}
