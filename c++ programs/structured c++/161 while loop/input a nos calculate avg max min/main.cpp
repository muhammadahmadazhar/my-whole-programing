#include <iostream>

using namespace std;

int main()
{
    float avg,max,min,no,c,sum;
    cout<<"enter a posite no=";
    cin>>no;
    c=0;
    sum=0;
    max=no;
    min=no;
    while(no>0)
    {
        sum=sum+no;
        c=c+1;
        if(no>max)
            max=no;
        else if(no<min)
                min=no;
                cout<<"enter a pasitive no=";
                cin>>no;

    }
    if(c==0)
        cout<<"error! no positive no entered";
    else
      {
                   avg=sum/c;
    cout<<"average="<<avg<<endl;
    cout<<"maximum no="<<max<<endl;
    cout<<"minimum no="<<min<<endl;
    cout<<"total no="<<c;

      }

    return 0;
}
