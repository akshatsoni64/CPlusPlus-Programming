#include<iostream.h>
#include<conio.h>

class measure
{
	private:
		int f1,f2;
		int i1,i2;
	public:
		void ftoi();
		void itof();
};

void measure::ftoi()
{
	cout<<"Enter Measurement in feet : ";
	cin>>f1;
	i1=f1*12;
	cout<<i1<<"\""<<endl<<endl;
}

void measure::itof()
{
	cout<<"Enter Measurement in Inch : ";
	cin>>i2;
	f2=i2/12;
	cout<<f2<<"\'";

}

void main()
{
	measure m;
	clrscr();
	m.ftoi();
	m.itof();
	getch();
	clrscr();
}