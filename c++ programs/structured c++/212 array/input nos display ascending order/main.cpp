#include <iostream>

using namespace std;

int main()
{
    int arr[5],i,j,min,t;
    for(i=0;i<5;i++)
        cin>>arr[i];
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
            if(arr[min]>arr[j])
                min=j;
            if(min!=arr[i])
            {
               t=arr[i];
               arr[i]=arr[min];
               arr[min]=t;
            }
    }
    for(i=0;i<5;i++)
        cout<<arr[i]<<" ";

    return 0;
}
