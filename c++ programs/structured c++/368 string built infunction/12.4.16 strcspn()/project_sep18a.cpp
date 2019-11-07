#include<iostream>
using namespace std;
int main()
{
    int result;
   char first[50]="c++ makes life cpicy";
   char second[50];
    cout<<"enter char to search\n";
    gets(second);
    result=strcspn(first,second);
    cout<<"result="<<result<<endl;
    if(result==strlen(first))
      cout<<"char not found";
    else 
      cout<<"CHAR FOUND";
   return 0;
}