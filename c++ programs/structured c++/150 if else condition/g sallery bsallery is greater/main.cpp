#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    float bs,hr,ma,ca,gs;
    cout<<"calculate gross sallery while basic sallery is input if basic sallery is greater than 5000"<<endl;
    cout<<"basic sallery=";
    cin>>bs;
    if(bs>5000)
  { hr=(bs*10)/100;
    ma=(bs*15)/100;
    ca=(bs*20)/100;
  }
    else
         if(bs<5000)
    {
    hr=(bs*20)/100;
    ma=(bs*20)/100;
    ca=(bs*20)/100;
    }
    gs=hr+ma+ca+bs;
    cout<<"gross sallery="<<gs;
    return 0;
}
