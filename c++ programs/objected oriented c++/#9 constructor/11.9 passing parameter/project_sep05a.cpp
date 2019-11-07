#include<iostream>
using namespace std;
class student
{
    private:
    int marks; char grade;
    public:
    student(int x,char y)
    {
        marks=x;  
        grade=y;
    }
    void show()
    {
    cout<<"marks="<<marks<<endl;
    cout<<"grade="<<grade<<endl;
    }
};
int main()
{
cout<<"Write a class that has  marks and grade as data members. A  constructor with two parameters inializes data members With the given values and member function show display the values of data members. Create two objects and display the values."<<endl;
    student s1(5,'a'),s2(7,'F');
    s1.show();
    s2.show();
   return 0;
}