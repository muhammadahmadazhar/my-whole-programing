#include<iostream>
using namespace std;
#include<string>
int main()
{
    char first[50]="hello programing";
    char search;
    char *result;
    cout<<"enter char to search\n";
    cout<<"it tells first occurence of char\n";
    cin>>search;
    result=strchr(first,search);
    cout<<result<<endl;
    if(result==NULL)
    cout<<"char no found in string";
    else
    cout<<"char found in string at index"<<result-first+1; 
   return 0;
}