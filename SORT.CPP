#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],n=10,i,j,temp;
	clrscr();

	cout<<"Enter "<<n<<" Numbers : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	cout<<"Array after Sorting in Ascending Order : \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
}