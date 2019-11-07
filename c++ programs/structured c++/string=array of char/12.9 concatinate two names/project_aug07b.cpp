#include<iostream>
using namespace std;
int main()
{
   cout<<"program that inputs a first nameand secnd name in two strings concatinate both strings in 3rd string"<<endl;
    char s1[50],s2[50],s3[50];
    cout<<"first name\n";
    cin>>s1;
    cout<<"second name\n";
    cin>>s2;
    int i,j;
    for(i=0;s1[i]!='\0';i++)
     {
         s3[i]=s1[i];
     }
    s3[i]=' ';
    for(j=0; s2[j]!='\0'; j++)
    {
        i++;
        s3[i]=s2[j];
    }
    cout<<"\nconcatination\n"<<s3;
   return 0;
}