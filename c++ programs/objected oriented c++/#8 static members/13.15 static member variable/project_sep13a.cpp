#include<iostream>
using namespace std;
class count
{
    private:
    static int n;
    public:
    count()
    {
      n++;
    }
    void display()
    {
      cout<<n<<" time object created"<<endl;
    }
};
int count::n;
int main()
{
/*write a program that counts the no of object created for particular class*/
    count c1,c2,c3,c4;
    c4.display();
   return 0;
}