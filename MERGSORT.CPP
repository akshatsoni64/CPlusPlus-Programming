#include<iostream.h>
#include<conio.h>

void main()
{
	int a[100],b[100],c[200],x,n,m;
	int i=0,j=0,k=0;

	clrscr();

	cout<<"Enter Size of First Array : ";
	cin>>n;

	cout<<"Enter Size of Second Array : ";
	cin>>m;

	cout<<endl<<endl<<"Enter First Array ("<<n<<" Numbers) : \n";
	for(x=0;x<n;x++)
	{
		cin>>a[x];
	}

	cout<<endl<<"Enter Second Array ("<<m<<" Numbers) : \n";
	for(x=0;x<m;x++)
	{
		cin>>b[x];
	}

	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}

	if(i<n)
	{
		for(x=i;x<n;x++)
		{
			c[k]=a[x];
			k++;
		}
	}
	if(j<m)
	{
		for(x=j;x<m;x++)
		{
			c[k]=b[x];
			k++;
		}
	}

	x=n+m;
	cout<<endl;
	for(i=0;i<x;i++)
	{
		cout<<endl<<c[i];
	}

	getch();
}