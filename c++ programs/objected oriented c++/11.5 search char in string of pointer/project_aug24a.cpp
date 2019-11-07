#include<iostream>
using namespace std;
int main()
{
cout<<"Write a program that declares and initializes a string. It inputs a character from the user and searches the character in the array.\n"; 
    char str[50]="hello programmer";
    char ch,*ptr,s;
    cout<<"enter single char";cin>>ch;
    s='n';
    ptr=str;
    while(*ptr++!='\0')
        if(*ptr=='ch')
        s='y';
        if(s=='y')
        cout<<"char found in array";
        else
        cout<<"char not found in array";
        
    return 0;
}
