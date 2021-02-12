#include<iostream.h>
#include<conio.h>

class student
{
  protected:

  int roll,marks1,marks2;

  public:

  void get()
  {
    cout<<"\n\nEnter the roll no ";
    cin>>roll;

    cout<<"\nEnter marks1 and marks2 ";
    cin>>marks1>>marks2;
  }

};

class sports
{
  protected:

  int marks_sport;

  public:

  void getsm()
  {
    cout<<"\n\nEnter the marks in sports ";
    cin>>marks_sport;

  }

};

class result:public student,public sports
{
  int tot,avg;

  public:

  void disp()
  {
    tot=marks1+marks2+marks_sport;
    avg=tot/3;

    clrscr();
    cout<<"\n\n                                       MARKSHEET                              ";
    cout<<"\n\n-------------------------------------------------------------------------------";
    cout<<"\n\nRoll no. : "<<roll;
    cout<<"\n\nTotal marks : "<<tot;
    cout<<"\n\nAverage : "<<avg;

  }
};

void main()
{
  clrscr();
  result obj;
  obj.get();
  obj.getsm();
  obj.disp();

  getch();

}
