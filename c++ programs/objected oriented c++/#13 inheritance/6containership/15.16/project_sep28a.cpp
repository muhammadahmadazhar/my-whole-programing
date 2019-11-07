#include<iostream>
using namespace std;
class Result
{
    private:
    int ar[3];
    public:
    void in()
    {
        for(int i=0;i<3;i++)
        {
            cout<<"enter marks=";
            cin>>ar[i];
        }
    }
    void show()
    {
        int t=0;
        cout<<"result card\n";
        for(int i=0;i<3;i++)
        {
            cout<<"marks="<<ar[i]<<endl;
             t+=ar[i];  
        }
        cout<<"total marks="<<t<<endl;
        cout<<"average marks="<<(float)t/3.0;
    }
};
class Student
{
    private:
    int rno;
    char name[50];
    Result res;
    public:
    void in()
    {
        cout<<"enter roll no=";
        cin>>rno;
        cout<<"enter name=";
        cin>>name;
        res.in();
    }
    void show()
    {
        cout<<"personal information\n";
        cout<<"roll no="<<rno<<endl;
        cout<<"name="<<name<<endl;
        res.show();
    }
};
int main()
{
cout<<"Write a class Result that has an array of three integers as attribute. It has a member function to input and a member function to display average of array elements. Create another class Student that inherits Result class. It has additional attributes of roll number, name and an object of type Result. It also has member functions to input and display its data members.\n";
    Student s;
    s.in();
    s.show();
   return 0;
}