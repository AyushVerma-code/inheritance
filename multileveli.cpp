#include<iostream.h>
#include<conio.h>

class student
{
  protected:

  int roll;

  public:

  void get_number(int a)
  {
    roll=a;
  }

  void put_number()
  {
    cout<<"\n\nRoll number : "<<roll;
  }

};

class test:public student
{
  protected:

  float sub1;
  float sub2;

  public:

  void get_marks(float x,float y)
  {
    sub1=x;
    sub2=y;
  }

  void put_marks()
  {
    cout<<"\n\nMarks in subject 1: "<<sub1;
    cout<<"\nMarks in subject 2: "<<sub2;
  }

};

class result:public test
{
  private:

  float total;

  public:

  void display()
  {
    total=sub1+sub2;
    put_number();
    put_marks();
    cout<<"\n\nTotal marks is "<<total;
  }
};

void main()
{
  clrscr();

  result student;
  student.get_number(10);
  student.get_marks(89.0,90.0);
  student.display();

  getch();


}
