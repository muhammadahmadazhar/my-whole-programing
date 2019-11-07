#include<iostream>
using namespace std;
#include<string>
int main()
{
   char first[50];
    char second[50]="built in function makes it heaven";
    strncpy(first,second,5);
    puts(first);
    puts(second);
   return 0;
}