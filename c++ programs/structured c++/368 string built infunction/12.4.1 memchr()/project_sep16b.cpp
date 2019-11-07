#include<iostream>
using namespace std;
#include<string>
int main()
{
  char test[50],search;
  void *result;
  int size=0,i=0;
    cout<<"enter sentence"<<endl;
    gets(test);
    cout<<"enter a single char to search\n";
    cin>>search;
   cout<<"the string is"<<endl;
    puts(test); 
    while(test[i]!='\0')
    {  i++;
      size++;
    }
    cout<<"size of string is\n"<<size<<endl;
    result=memchr(test,search,size);
    cout<<"result="<<result<<endl;
    if(result==NULL)
    cout<<"char NOT found in array"; 
    else
    cout<<"char found in array";
     return 0;
}