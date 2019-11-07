#include<iostream>
using namespace std;
int main()
{
   char *result;
   char first[50]="c++ makes the life hell";
   char second[50];
    puts(first);
   cout<<"enter string to search\n";
   gets(second);
    result=strstr(first,second);
   if(result==NULL)
    cout<<"string not found";
   else
    cout<<"matching string found at index"<<result-first; 
   return 0;
}