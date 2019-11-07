#include<iostream>
using namespace std;
struct phone
{
    int nc,ac;
    long no;
};
int main()
{
cout<<"program that uses a structure to store three parts of phone no ie national code area code number seperately. create two variables of structure phone iniatalize one variable and get input in second variable then display both nos\n";
    phone p1={3,40,4825885},p2;
    cout<<"national code=";cin>>p2.nc;
    cout<<"area code=";cin>>p2.ac;
    cout<<"number=";cin>>p2.no;
    cout<<"first no\n";
    cout<<"+"<<p1.nc<<"_"<<p1.ac<<"_"<<p1.no;
    cout<<"\nsecond no\n";
    cout<<"+"<<p2.nc<<"_"<<p2.ac<<"_"<<p2.no;
   return 0;
}