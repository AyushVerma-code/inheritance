//program to show working of virtual base classes using inheritance
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class base
{
	public:
		int a;
};
class d1:virtual public base                 //d1 inherits base as virtual.
{

	public:
		int b;
};
class d2:virtual public base
{

	public:
		int c;
};
class d3:public d1,public d2              //this time there is only one copy of base

{
	public:
		int total;
};

int main()
{       system(" cls ");
	d3 ob;
	ob.a=25;
	ob.b=50;
	ob.c=75;
	ob.total=ob.a+ob.b+ob.c;
	cout<<ob.a<<"\t"<<ob.b<<"\t"<<ob.c<<"\t"<<ob.total<<endl;
	return 0;

}

