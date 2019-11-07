#include<iostream>
using namespace std;
class Person
{
    private:
    char name[50];
    public:
    void in()
    {
        cout<<"enter name=";
        cin>>name;
    }
    void show()
    {
        cout<<"name="<<name<<endl;
    }
};
int main()
{
cout<<"Write a class that contains an attribute name, a function to input and a function to display name. Creates array of pointers in wich each element referes to an object of the class.\n";
    Person *p[5];
    for(int i=0;i<5;i++)
    {
        p[i]=new Person;
        p[i]->in();
    }
    for(int i=0;i<5;i++)
    {
        p[i]->show();
    }
   return 0;
}