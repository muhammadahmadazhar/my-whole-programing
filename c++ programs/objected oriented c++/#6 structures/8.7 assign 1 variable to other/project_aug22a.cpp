#include<iostream>
using namespace std;
struct marks
{
    int mar;
    char grade;
};
int main()
{
cout<<"Write a program that declares a structure to store marks and grade of 'a student. It defines two structure variables. It inputs the values in one variable and assigns that variable to the second variable. It finally displays the values of both variables.\n";
    marks m1,m2;
    cout<<"enter marks 1=";cin>>m1.mar;
    cout<<"enter grade 1=";cin>>m1.grade;
    m2.mar=m1.mar;//m2=m1;
    m2.grade=m1.grade;
    cout<<"\nmarks 1="<<m1.mar;
    cout<<"\ngrade 1="<<m1.grade;
    cout<<"\nmarks 2="<<m2.mar;
    cout<<"\ngrade 2="<<m2.grade;
   return 0;
}