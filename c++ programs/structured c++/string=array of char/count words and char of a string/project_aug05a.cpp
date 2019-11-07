#include<iostream>

using namespace std;
int main()
{
   char name[50];
   cout<<"enter sentence"<<endl;
   cin.getline(name,50);
    int i=0,word=1,length=0,x;
    while(name[i]!='\0')
    {     i++; 
      if(name[i]==' ')
       {
        word++;}
      else
        length++;
     }
    cout<<"words="<<word<<"\nlength of sentence="<<i;
    cout<<name;
   return 0;
}