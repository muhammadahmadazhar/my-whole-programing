#include<iostream>
using namespace std;
struct record
{
  int rno; int marks; float gpa;
};
void pass(record *r2);
void display(record *r2);
int main()
{
cout<<"Write a program that decalres a structure to store the record of a student. It declares a structure variable. lt passes the structure variable to a function using pointer to input data. It again passes it to another function using pointer to display the data.\n";
   record r1,*r2;
    pass(&r1);
    display(&r1);
   return 0;
}
void pass(record *r2)
{
  cout<<"enter roll no=";cin>>r2->rno; 
  cout<<"enter marks=";cin>>r2->marks;
  cout<<"enter gpa=";cin>>r2->gpa;  
}
void display(record *r2)
{
    cout<<"roll no="<<r2->rno<<endl;
    cout<<"marks="<<r2->marks<<endl;
    cout<<"gpa="<<r2->gpa<<endl;
}