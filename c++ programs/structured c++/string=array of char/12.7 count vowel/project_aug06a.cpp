#include<iostream>
using namespace std;
int main()
{
   cout<<"program that input a string from user and counts the no of vowels in the string\n";
    char name[50];
    cout<<"enter sentence\n";
    cin.getline(name,50);
    int v=0;
      for (int i=0;name[i]!='\0';i++)
    {
        switch(name[i])
        {
           case 'a':
           case 'A':
           case 'e':
           case 'E':  
           case 'i':
           case 'I':
           case 'o':
           case 'O':
           case 'u':
           case 'U':   
            v++;
        }
        
     }       
    cout<<"\nvowel="<<v;
    return 0;
}      