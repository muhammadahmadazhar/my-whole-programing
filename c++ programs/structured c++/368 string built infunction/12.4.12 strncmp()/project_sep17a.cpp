#include<iostream>
using namespace std;
#include<string>
int main()
{
    int result;   char ch;
 char str1[]="this are";
 char str2[]="this ";
 cout<<"string 1"<<endl;
 cout<<str1<<endl;
 cout<<"string 2"<<endl;
 cout<<str2<<endl;
 cout<<"enter cherector to check"<<endl;
 cin>>ch;
 result=strncmp(str1,str2,ch); 
  if(result==0)
  cout<<"both strings are same for byt\n";
  else if(result<0)
  cout<<"string 1 is less than string 2\n";
  else
  cout<<"string 1 is greater than string 2\n";
   return 0;
}