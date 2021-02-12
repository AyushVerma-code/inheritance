// program to show access control in public derivation of class
#include<iostream.h>
#include<stdio.h>
#include<conio.h>          //for gets()
const int LEN=25;
class employee{
		private:
		  char name[LEN];
		  unsigned long enumb;
		public:
		  void getdata()
		  {
			cout<<"enter name";
			gets(name);
			cout<<"enter employee number";
			cin>>enumb;

		  }
		  void putdata()
		  {
			cout<<" name"<<name<<"\t";
			cout<<"employee number"<<enumb<<"\t";
			cout<<"basic salary:"<<basic;

		  }

	      protected:
			float basic;
			void getbasic()
			{
				cout<<"enter basic :";
				cin>>basic;
			}
};

class manager:public employee
{
	private:
		char title [LEN];
	public:
		void getdata()
		{

			employee::getdata();  //to resolve identity as manager also has a getdata
			getbasic();
			cout<<"enter title:";
			gets(title);
			cout<<"\n";
		}
		void putdata()
		{

			employee::putdata();
			cout<<"\ttitle:"<<title<<"\n";
		 }

};

int main ()
{

	clrscr();
	manager m1,m2;
	cout<<"manager1\n";
	m1.getdata();
	cout<<"manager2\n";
	m2.getdata();
	cout<<"\t\tmanager1 details\n";
	m1.putdata();
	cout<<"\t\tmanager2 details\n";
	m2.putdata();
	return 0;


}
