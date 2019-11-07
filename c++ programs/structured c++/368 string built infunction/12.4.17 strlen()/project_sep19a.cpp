#include<iostream>
using namespace std;
int main()
{
    int result;
char first[50];
    gets(first);
    puts(first);
    result=strlen(first);
    cout<<"length="<<result;
   return 0;
}