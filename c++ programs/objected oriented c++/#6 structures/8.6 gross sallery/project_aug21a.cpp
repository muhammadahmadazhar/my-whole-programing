#include<iostream>
using namespace std;
struct employe
{
    int no,hours,rate;
    char name[30];
    double gs;
};
int main()
{
cout<<"Write a program that uses a structure to store employee number, name, hours worked, hourly rate and gross pay. The program inputs employee number, name, hours worked and hourly rate the user, calculates gross pay and then displays all employee data on screen.\n";
    employe e1;
    cout<<"employe no=";cin>>e1.no;
    cout<<"employe name=";cin>>e1.name;
    cout<<"hourly worked=";cin>>e1.hours;
    cout<<"hourly rate=";cin>>e1.rate;
    e1.gs=e1.hours*e1.rate;
    cout<<"\nemploye no="<<e1.no;
    cout<<"\nemploye name="<<e1.name[30];
    cout<<"\nhourly worked="<<e1.hours;
    cout<<"\nhourly rate="<<e1.rate;
    cout<<"\ngross sallery="<<e1.gs;
   return 0;
}