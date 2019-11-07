#include<iostream>
using namespace std;
class array
{
    private:
    int arr[5];
    public:
    void fill();
    void display();
    int max();
    void min();
};
void array:: fill()
{
    for(int i=0;i<5;i++)
    {
        cout<<"enter integer=";
        cin>>arr[i];
    }
}
void array:: display()
{
   for(int i=0;i<5;i++)
   {
    cout<<"value"<<i+1<<"="<<arr[i]<<endl;
   }
}
int array:: max()
{ 
    int max=0;
    max=arr[0];
    for(int i=1;i<5;i++)
    {
      if(max<arr[i])
         max=arr[i];
    }
    return max;
}
void array:: min()
{
        int min=0;
      min=arr[0];
      for(int i=1;i<5;i++)
       {
        if(min>arr[i])
          min=arr[i];   
       }
    cout<<"minimum value="<<min<<endl;
}
int main()
{
/*Write a class Array that contains an array of integers to store the values. It alco contains the following member function: 
The fill() function is used to fill the array with values from the user. The display() function is used to display the values of array.  The max() function shows the maximum value in the array.  The min() function shows the minimum value in the array. 
All member function should be defined outside the class.*/
    array a;  int x;
    a.fill();
    a.display();
  x=a.max();
    cout<<"\nmaximum value="<<x<<endl;
    a.min();
   return 0;
}