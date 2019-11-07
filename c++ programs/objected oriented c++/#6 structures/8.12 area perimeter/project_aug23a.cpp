#include<iostream>
using namespace std;
struct dimention
{
 int length;  int width;   
};
struct result
{
 int area;  int perimeter;   
};
struct rectangle
{
  dimention size;
  result state;  
};
int main()
{
cout<<"Write a program that uses three structures Dimension, Results and Rectangle. The Dimension structure stores length and width, Result structure stores area and perimeter and Rectangle stores two variables of Dimension and Results. The program declares a variable of type Rectangle, inputs length, width, calculates area and width and then displays the result.\n";
    rectangle re;
   cout<<"enter length=";cin>>re.size.length;
   cout<<"enter width=";cin>>re.size.width;
  re.state.area=re.size.length*re.size.width;
   cout<<"\narea="<<re.state.area<<endl;
  re.state.perimeter=2*re.size.length+2*re.size.width;
   cout<<"perimeter="<<re.state.perimeter;
   return 0;
}