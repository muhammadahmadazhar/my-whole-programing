#include<iostream>
using namespace std;
int main()
{
   char first[50];
    char second[50]="built in function makes it heaven";
    strcpy(first,second);
    puts(first);
    puts(second);
   return 0;
}