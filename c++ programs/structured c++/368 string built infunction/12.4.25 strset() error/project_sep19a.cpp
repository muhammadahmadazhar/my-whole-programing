#include<iostream>
using namespace std;
int main()
{
   char fir[]="12345678";
   char ch='*';
   cout<<"fir before="<<fir<<endl;
   strset(fir,ch);
   cout<<"fir after="<<fir<<endl; 
   return 0;
}