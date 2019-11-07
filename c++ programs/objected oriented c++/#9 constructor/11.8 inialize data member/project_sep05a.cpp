#include<iostream>
using namespace std;
class number
{
    private:
    int x,y;
    public:
    number()
    {
    x=y=100;
    }
    float avg()
    {
        return (x+y)/2;
    }
};
int main()
{
cout<<"Write a class that contains two integer data members which are initialized to 100 when an object is created. It has a member function avg that displays the average of data members.\n";
    number n; 
    n.avg();
    cout<<"average="<<n.avg()<<endl;
   return 0;
}