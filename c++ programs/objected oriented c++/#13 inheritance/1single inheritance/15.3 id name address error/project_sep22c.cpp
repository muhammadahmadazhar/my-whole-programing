#include<iostream>
#include<String.h>
using namespace std;
class Person
{
    private:
    int id;
    string name,adress;
    public:
    Person()
    {
       id=0;
       name="\0";
       adress="\0";
    }
    void getinfo()
    {string abc;
        cout<<"personal detail\n";
        cout<<"enter id=";
        cin>>id;
        cout<<"enter name=";
        cin>>name;
        cout<<"enter address=";
        cin>>adress;
    }
    void showinfo()
    {
        cout<<"id="<<id<<endl;
        cout<<"name=";
        cout<<name;
        cout<<"address=";
        cout<<adress;
    }
};
class Student: public Person
{
    private:
    int rno,marks;
    public:
    Student():Person()
    {
        rno=0;
        marks=0;
    }
    void getedu()
    {
        cout<<"education detail\n";
        cout<<"enter roll no=";
        cin>>rno;
        cout<<"enter marks=";
        cin>>marks;
    }
    void showedu()
    {
        cout<<"roll no="<<rno;
        cout<<"marks="<<marks;
    }
};
int main()
{
   Student s1,s2;
    s1.getinfo();
    s1.getedu();
    s1.showinfo();
    s1.showedu();
   return 0;
}
