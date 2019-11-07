#include<iostream>
using namespace std;
#include<string>
int main()
{
char first[50]="hello ";
char second[50]="world of programing";
    strncat(first,second,8);
    puts(first);
   return 0;
}