#include<iostream>
using namespace std;
void get(int *p,int m);
int main()
{
cout<<"Write a program that inputs length from the user and declares an array of integers of the length specified by the user. The program then inputs values in array and displays them.\n";
    int n,j,*ptr;
    cout<<"enter length of array="; cin>>n;
    ptr=new int [n];
    get(ptr,n);
    for(j=0;j<n;j++)
    {
       cout<<"integer value="<<*ptr++<<endl;
    }
    delete[] ptr;
   return 0;
}
void get(int *p,int m)
{    int i;
  for(i=0;i<m;i++)
    {
        cout<<"enter integer=";
        cin>>*p++;
    }
}