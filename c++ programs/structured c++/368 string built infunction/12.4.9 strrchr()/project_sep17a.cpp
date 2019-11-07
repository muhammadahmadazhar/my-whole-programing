#include<iostream>
using namespace std;
#include<string>
int main()
{
    char first[50]="hello programing";
    char search;
    char *result;
    cout<<"string is\n"<<first<<endl;
    cout<<"enter char to search\n";
    cout<<"it tells last occurence of char\n";
    cin>>search;
    result=strrchr(first,search);
    cout<<result<<endl;
    if(result)
    cout<<"char found in string at index"<<result-first+1;
    else
    cout<<"char no found in string";
   return 0;
}