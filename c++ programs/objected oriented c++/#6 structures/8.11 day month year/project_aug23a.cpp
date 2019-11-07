#include<iostream>
using namespace std;
struct date
{
 int day;  int month;   int year;  
};
struct phone
{
 char name[30];  char city[30]; 
 int telephone; date da;  
};
int main()
{
cout<<"Write a program that uses two structures date and phonebook. The date structure stores day, month and year. Phonebook structure stores name, city, telephone and a date type. The program declares a variable of type phonebook, inputs Values displays the values.\n";
    phone ph;
    cout<<"enter name=";cin>>ph.name;
    cout<<"enter city=";cin>>ph.city;
  cout<<"enter telephone=";cin>>ph.telephone;
    cout<<"enter day=";cin>>ph.da.day;
    cout<<"enter month=";cin>>ph.da.month;
    cout<<"enter year=";cin>>ph.da.year;
    cout<<"name="<<ph.name<<endl;
    cout<<"city="<<ph.city<<endl;
    cout<<"telephone="<<ph.telephone<<endl;
    cout<<"day="<<ph.da.day<<endl;
    cout<<"month="<<ph.da.month<<endl;
    cout<<"year="<<ph.da.year<<endl;
   return 0;
}