#include<iostream>
using namespace std;
union shirt
{
    char size; int chest; int height;
}sh;
int main()
{
cout<<"Write a program that uses a union shirt to store size, chest and height. The program inputs size, chest measurement and height measurement and displays the values.\n";
    cout<<"enter size s/m/l=";cin>>sh.size;
    cout<<"\nsize="<<sh.size<<endl;
    cout<<"enter chest=";cin>>sh.chest;
    cout<<"\nchest="<<sh.chest<<endl;
    cout<<"enter height=";cin>>sh.height;
    cout<<"\nheight="<<sh.height<<endl;
    cout<<"\n\n"; 
        cout<<"\nsize="<<sh.size<<endl;
        cout<<"\nchest="<<sh.chest<<endl;
        cout<<"\nheight="<<sh.height<<endl;
   return 0;
}