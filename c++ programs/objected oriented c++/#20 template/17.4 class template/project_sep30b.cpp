#include<iostream>
using namespace std;
template<class type>
class value
{
    private:
    type a[3];
    public:
        void in()
        {
            for(int i=0;i<5;i++)
            {
                cout<<"enter no=";
                cin>>a[i];
            }
        }
         void show()
        {
            for(int i=0;i<5;i++)
            {
                cout<<"no="<<a[i];
            }
        }
};
int main()
{
    value <int>v1;
    value <char>v2;
    v1.in();
    v2.in();
    v1.show();
    v2.show();
   return 0;
}