#include <iostream>

using namespace std;
 void exp()
    {
        throw 'L';
    }
int main()
{

    int a=3;
    try{
        if(a==3)
        throw 10;}
    catch(...){
        cout<<"hahahah";}
    try{
    if(a==3)
     throw 9;
       }
    catch(int x)
    {
        cout<<"second "<<x<<endl;
    }
    try
    {
        exp();
    }
    catch(char y)
    {
        cout<<"char="<<y<<endl;
    }
    return 0;
}
