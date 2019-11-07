#include<iostream>
using namespace std;
int main()
{
   cout<<"program that inputs name of five countries. then it displays countries whoase name start with vowel.\n";
    char name[5][30],ch;
    int i;
    for( i=0;i<5;i++)
    {
     cout<<"enter country name\n";
    cin>>name[i];
    }
    for(i=0;i<5;i++)
    {
      ch=name[i][0];
        switch(ch)
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<name[i]<<endl;
     }
   return 0;
}