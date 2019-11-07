#include<iostream>
using namespace std;
template<class t>
t minno(t arr[],int n)
{
   t min;
    min=arr[0];
    for(int i=1;i<n;i++)
    {
       if(min>arr[i])
          min=arr[i];
    } 
    return min;
}
int main()
{
   int arr1[]={3,2,5,6,9,1};
   char arr2[]={'c','g','m','n','b'};
   double arr3[]={8.7,9.7,5.4,3.3};
    cout<<"minimum no="<<minno(arr1,6)<<endl;
    cout<<"minimum char="<<minno(arr2,5)<<endl;
    cout<<"minimum float no="<<minno(arr3,4)<<endl;
   return 0;
}