#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p,v,j;

	clrscr();

	cout<<"Enter Size of Array : ";
	cin>>n;

	cout<<"Enter "<<n<<" Numbers : \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"Enter the Position for Insertion : ";
	cin>>p;

	cout<<"Enter the New Value : ";
	cin>>v;

	for(i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=v;
	i=n+1;

       //	clrscr();

	cout<<"Array after Insertion : \n";
	for(j=0;j<i;j++)
	{
		cout<<"a["<<j<<"] = "<<a[j]<<endl;
	}
	getch();
}