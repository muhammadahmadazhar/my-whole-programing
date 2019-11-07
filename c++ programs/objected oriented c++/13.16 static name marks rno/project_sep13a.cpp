#include<iostream>
using namespace std;
class student
{
    private:
    static int n;
    int rno; int marks;
    char name[30];
    public:
    student()
    {
       n++;
       rno=n;
    }
    void set()
    {
      cout<<"enter name=";
      cin.getline(name,30);
      cout<<"enter marks=";
      cin>>marks;
    }
    void show()
    {
      cout<<"roll no="<<rno<<endl;
      cout<<"name="<<name<<endl;
      cout<<"marks="<<marks<<endl;
    }
};
int student::n;
int main()
{
/*Write a program that creates three objects of class Student. Each object of class must be assigned a unique roll number. (Hint: Use static data member for unique roll number)*/
    student s1,s2,s3;
    s1.set();
    s2.set();
    s3.set();
    s1.show();
    s2.show();
    s3.show();
   return 0;
}