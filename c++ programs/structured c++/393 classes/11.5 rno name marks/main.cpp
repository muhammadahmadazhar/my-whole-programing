#include <iostream>

using namespace std;
class result
{
    private:
    int rno; char name[30]; float marks[3];
    public:
    void input()
    {
        cout<<"enter roll no=";
        cin>>rno;
        cout<<"enter name=";
        cin>>name;
        for(int i=0;i<3;i++)
        {
            cout<<"enter marks=";
            cin>>marks[i];
        }
    }
    void show()
    {
        cout<<"roll no="<<rno<<endl;
        cout<<"name="<<name<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"marks"<<i+1<<"="<<marks[i]<<endl;
        }
    }
    float total()
    {
        float ma=0.0;
        for(int i=0;i<3;i++)
        {
           ma+=marks[i];
        }
        return ma;
    }
    float avg(float a)
    {
        return a/3.0;
    }
};
int main()
{
 /*Write a class Result that contains roll no, name and marks of three subjects.
The marks are stored in an array of integers. The class also contains the following
 member functions
 The input() function is used to input the values in data members
 The show() function is used to displays the value of data members
 The total() function returns the total marks of a Sttldcnt.
 The avg() function returns the average marks of a student.
The program should create an object of the class and call the member functions.*/
    float x,y;
    result r;
    r.input();
    r.show();
  x=r.total();
    cout<<"total marks="<<x<<endl;
  y=r.avg(x);
    cout<<"average="<<y<<endl;
    return 0;
}
