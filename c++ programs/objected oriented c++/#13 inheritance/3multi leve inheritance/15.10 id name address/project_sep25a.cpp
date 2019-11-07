#include<iostream>
using namespace std;
/*Write a Class Person that has attributes ol id, name and address. It has a constructor to initialize a member function to input and a member function to display data members  create 2nd class Student that inherits Person class. It has additional attributes of roll number and marks. It also has member functions to input and display its data members. Create 3rd class Scholarship that inherits Student class. It has additional attributes of scholarship name and amount. It also has member functions to input and display its data members.*/
class Person
{
    private:
    int id;
    char name[50];
    public:
    Person()
    {
        id=0;
        name[0]='\0';
    }
    void in()
    {
        cout<<"enter id=";
        cin>>id;
        cout<<"enter name=";
        cin>>name;
    }
    void disp()
    {
        cout<<"id="<<id<<endl;
        cout<<"name=";
        puts(name);
    }
};
class Student :public Person
{
    private:
    int rno,marks;
    public:
    Student():Person()
    {
        rno=marks=0;
    }
    void in()
    {
        Person::in();
        cout<<"enter roll no=";
        cin>>rno;
        cout<<"enter marks="; 
        cin>>marks;  
    }
    void disp()
    {
        Person::disp();
        cout<<"roll no="<<rno<<endl;
        cout<<"marks="<<marks<<endl;
    }
};
class Scholarship :public Student
{
    private:
    char sname[30];
    int amount;
    public:
    Scholarship():Student()
    {
        sname[0]='\0';
        amount=0;
    }
    void in()
    {
        Student::in();
        cout<<"enter scholarship name=";
        cin>>sname;
        cout<<"amount=";
        cin>>amount;
    }
    void disp()
    {
        Student::disp();
        cout<<"scholarship=";
        puts(sname);
        cout<<"amount="<<amount<<endl;
    }
};
int main()
{
   Scholarship s;
    s.disp();
    s.in();
    s.disp();
   return 0;
}