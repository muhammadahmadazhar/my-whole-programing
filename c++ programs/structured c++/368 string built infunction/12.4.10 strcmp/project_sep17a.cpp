#include<iostream>
using namespace std;
#include<string>
int main()
{
    int result;
 char str1[]="this is test string";
 char str2[]="this is test string";
 char str3[]="1234";
 char str4[]="123";
 char str5[]="123";
 char str6[]="1234";
    
 cout<<"string 1"<<endl;
 cout<<str1<<endl;
 cout<<"string 2"<<endl;
 cout<<str2<<endl;
 result=strcmp(str1,str2); 
  if(result==0)
  cout<<"both strings are same for byt\n";
  else
  cout<<"both strings NOT same for byt\n";
    result=strcmp(str3,str4);
  cout<<"if frst string is lengthy result is positive\n"<<result<<endl;
    result=strcmp(str5,str6);
  cout<<"if second string is lengthy result is negative\n"<<result;
   return 0;
}