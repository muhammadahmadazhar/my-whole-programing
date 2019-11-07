#include<iostream>
using namespace std;
int main()
{
    cout<<"program that inputs and display the no of upercase and lowercase vowels and uppercase and lowercase consonants in sentence";
  char name[100];
    cout<<"\nenter sentence\n";
    cin.getline(name,100);
    int uv,lv,uc,lc,j;
    uv=lv=uc=lc=0;
    for(j=0;name[j]!='\0';j++)
     {   
    if(name[j]=='A'||name[j]=='E'||name[j]=='I'||name[j]=='O'||name[j]=='U')  
    uv++;
    else if(name[j]=='a'||name[j]=='e'||name[j]=='i'||name[j]=='o'||name[j]=='u')  
     lv++;
    else if(name[j]>=65&&name[j]<=90)
        uc++;
    else if(name[j]>=97&&name[j]<=122)
        lc++;             
     }
    cout<<"upercase vowel="<<uv<<endl;
    cout<<"lowercase vowel="<<lv<<endl;
    cout<<"upercase consonants="<<uc;
    cout<<"\nlowercase consonant="<<lc;
         return 0;
}