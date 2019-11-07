#include<iostream>
#include<string>
using namespace std;
int main()
{
char str1[]="sample string";
    cout<<"str1=";
    puts(str1);
    cout<<"replacing char\n";
    memset(str1,'x',7);
    cout<<"str1=";
    puts(str1);
   return 0;
}