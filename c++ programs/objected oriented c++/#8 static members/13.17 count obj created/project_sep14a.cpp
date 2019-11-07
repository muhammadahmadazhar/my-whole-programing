#include<iostream>
using namespace std;
class coun
{
    private:
    static int n;
    public:
    coun()
    {
      n++;
    }   
    static void show()
    {
      cout<<"object created "<<n<<" times"<<endl;
    }
};
int coun::n;
int main()
{
/*Write a program that counts the number of objects created of a particular class. The program must be able to display the result even if no object is created so far.*/
    coun::show();
    coun c1,c2;
    c1.show();
    coun c3,c4,c5;
    c3.show();
   return 0;
}