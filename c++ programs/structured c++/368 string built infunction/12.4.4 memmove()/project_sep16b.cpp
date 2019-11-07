#include<iostream>
#include<string>
using namespace std;
int main()
{
char str1[]="sample string";
char str2[30];
    cout<<"str1=";
    puts(str1);
    cout<<"moving str1 in str2"<<endl;
    cout<<"memmove is slow than memcopy\n";
    memmove(str2,str1,14);
    cout<<"str1=";
    puts(str1);
    cout<<"str2=";
    puts(str2);
   return 0;
}