#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    float math,phy,che,bio,eng,tm,sum,percent;
    cout<<" input marks of 5 subjects calculate total marks and percentage marks and grades accordingly"<<endl;
    cout<<"math=";
    cin>>math;
    cout<<"physics=";
    cin>>phy;
    cout<<"chemistry=";
    cin>>che;
    cout<<"bio=";
    cin>>bio;
    cout<<"english=";
    cin>>eng;
    cout<<"total marks=";
    cin>>tm;
    sum=math+phy+che+bio+eng;
    cout<<"total marks obtained="<<sum<<endl;
    percent=(sum/tm)*100;
    cout<<"percentage marks="<<percent<<"%"<<endl;
    if(percent>=80 && percent<=100)
        cout<<"grade A";
    if(percent>=60 && percent<=79)
        cout<<"grade B";
    if(percent>=50 && percent<=59)
        cout<<"grade C";
    if(percent<50)
        cout<<"congradulation you are FAIL";
    return 0;
}
