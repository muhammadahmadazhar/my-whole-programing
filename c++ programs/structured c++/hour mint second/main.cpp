#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
  int sec,h,m,s;
  cout<<"program that input time in seconds and convert it into hh:mm:ss"<<endl;
  cout<<"enter second=";
  cin>>sec;
  h=sec/3600;
  s=sec%3600;
  m=s/60;
  s=s%60;
  cout<<"h:"<<"m:"<<"s:"<<endl;
  cout<<h<<":"<<m<<":"<<s;
    return 0;
}
