#include<iostream>
using namespace std;
struct year
{
    int dd,mm,yy;
};
int main()
{
    cout<<"program that declare a structure to store day month and year of birth date it input three values and display a date of birth in dd/mm/yy formate\n";
   year y;
    cout<<"day="; cin>>y.dd;
    cout<<"month="; cin>>y.mm;
    cout<<"year=";cin>>y.yy;
    cout<<"date of birth is\n";
    cout<<y.dd<<"/"<<y.mm<<"/"<<y.yy;
   return 0;
}