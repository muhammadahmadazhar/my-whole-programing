#include<iostream>
using namespace std;
struct clock
{
    int hh,mm,ss;
};
void convert(struct clock *c3,long c4);
int main()
{
cout<<"Write a program that decalres a structure to store hours, minutes and seconds. It declares a structure variable. It inputs number of seconds from the user and passes seconds to function by value and structure variable using pointer. The function converts the seconds into hours, minutes and seconds and stores it in the structure variable. The main() function finally displays the time on screen.\n";
     struct clock c1; long c2;
    cout<<"enter total seconds=";
    cin>>c2;
    convert(&c1,c2);
    cout<<c1.hh<<":"<<c1.mm<<":"<<c1.ss;
   return 0;
}
 void convert(struct clock *c3,long c4)
  {
   c3->ss=c4%60;
   c4=c4/60;
   c3->mm=c4%60;
   c3->hh=c4/60; 
  }