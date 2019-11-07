#include<iostream>
using namespace std;
int main()
{  cout<<"program that input a string from the user then copies it anothr string\n"; 
   char name[50],swap[50];
    cout<<"enter sentence\n";
    cin.getline(name,50);
    int i=0;
    while(name[i]!='\0')
    {
    swap[i]=name[i];
    i++;
    }
    swap[i]='\0';
    cout<<"\nswapped string="<<swap;
   return 0;
}