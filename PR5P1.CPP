#include<iostream.h>
#include<conio.h>

class student
{
	private:
		int no;
		char name[20];
	public:
		void getinfo(student s1)
		{
			cout<<"Enter Your No. & Name : ";
			cin>>s1.no;
			cin>>s1.name;
		}

		void putinfo(student s1)
		{
			cout<<"No : "<<s1.no<<endl;
			cout<<"Name : "<<s1.name;
		}

};

void main()
{
	student s1;

	clrscr();

	s1.getinfo(s1);
	s1.putinfo(s1);

	getch();
}