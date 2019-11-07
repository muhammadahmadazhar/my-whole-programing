#include<iostream>
using namespace std;
#include<string>
int main()
{
    int result;
 char str1[]="this is test string";
 char str2[]="THIS IS TEST STRING";
 cout<<"string 1"<<endl;
 cout<<str1<<endl;
 cout<<"string 2"<<endl;
 cout<<str2<<endl;
 result=strcmp(str1,str2); 
  if(result==0)
  cout<<"both strings are same for byt\n";
  else if(result<0)
  cout<<"string 1 is less than string 2\n";
  else
  cout<<"string 1 is greater than string 2\n";
    result=stricmp(str1,str2);
    
   return 0;
}