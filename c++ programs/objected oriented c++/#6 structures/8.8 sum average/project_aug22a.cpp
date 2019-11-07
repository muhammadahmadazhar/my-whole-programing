#include<iostream>
using namespace std;
struct student
{
    int rno;
    int marks[5];
};
int main()
{
cout<<"Write a program that declares a structure to store roll no and marks of five subjects. It defines a structure variable, inputs the values and displays roll no, marks and average marks.\n";
    student s1; int m=0;float n=0.0;
    cout<<"enter roll no=";cin>>s1.rno;
    for(int i=0; i<5; i++)
    {
    cout<<"enter marks of 5 subject=";
    cin>>s1.marks[i];}
    cout<<"\nroll no="<<s1.rno<<endl;
    for(int i=0; i<5; i++)
    {cout<<i<<" marks="<<s1.marks[i]<<endl;
        m+=s1.marks[i];}
    cout<<"total marks="<<m<<endl;
    n=m/5.0;
    cout<<"average="<<n<<endl;
   return 0;
}