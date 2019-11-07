#include<iostream>
using namespace std;
struct result
{
  int marks;  
  char grade; 
};
struct record
{
  int rno;
  result res;   
};
int main()
{
cout<<"Write a program that uses two structures Result and Record. The Result structure stores marks and grade, Record structure stores roll number and a Result type. The program declares a variable of type Record, inputs roll number, marks and grade. It finally displays these values on the screen.\n";
    record rec;
    cout<<"enter roll no=";cin>>rec.rno;
    cout<<"enter marks=";cin>>rec.res.marks;
    cout<<"entet grade=";cin>>rec.res.grade;
    cout<<"roll no="<<rec.rno<<endl;
    cout<<"marks="<<rec.res.marks<<endl;
    cout<<"grade="<<rec.res.grade<<endl;
   return 0;
}