#include<iostream>
#include<string>
using namespace std;
int main()
{
char str1[50]="the more u work ";
char str2[50]="the more u gain ";
    cout<<"str1=";
    puts(str1);
    cout<<"str2=";
    puts(str2);
    cout<<"concatination in process\n";
    strcat(str1,str2);
    cout<<"string 1 after appended\nstr1=";
    puts(str1);
   return 0;
}