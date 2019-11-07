#include<iostream>
using namespace std;
#include<string>
int main()
{
    int result;
 char str1[]="this is test string 1";
 char str2[]="this is test string 2";
 char str3[]="1234";
 char str4[]="123";
 char str5[]="123";
 char str6[]="1234";
    
 cout<<"string 1"<<endl;
 cout<<str1<<endl;
 cout<<"string 2"<<endl;
 cout<<str2<<endl;
 result=memcmp(str1,str2,20); 
  if(result==0)
  cout<<"both strings are same for 20 byt\n";
  else
  cout<<"both strings NOT same for 20 byt\n";
    result=memcmp(str1,str2,21);
      if(result==0)
  cout<<"both strings are same for 21 byt\n";
  else
  cout<<"both strings NOT same for 21 byt\n";
    result=memcmp(str3,str4,4);
  cout<<"if frst string is lengthy result is positive\n"<<result<<endl;
    result=memcmp(str5,str6,4);
  cout<<"if second string is lengthy result is negative\n"<<result;
   return 0;
}