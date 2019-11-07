#include<iostream>
using namespace std;
class travel
{
    private:
    int km,hr;
    public:
    travel();
    void get();
    void show();
    travel add(travel t);
};
travel::travel()
{
 km=hr=0;
}
void travel::get()
{
 cout<<"enter km=";
 cin>>km;
 cout<<"enter hour=";
 cin>>hr;
}
void travel:: show()
{
 cout<<"kilometer="<<km<<endl;
 cout<<"hours="<<hr<<endl;
}
travel travel::add(travel t)
{   
    travel tr;
    tr.km=km+t.km;
    tr.hr=hr+t.hr;
    cout<<"total kilometer="<<tr.km<<endl;
    cout<<"total hour="<<tr.hr<<endl;
    return tr;
}
int main()
{
/*Write a class Travel that has the attributes of kilometers and hours. A constructor with no parameter initializes both data members to O. A member function get() inputs the values and function show() displays the values. it has a member function add() that takes an object of type Travel to add the kilometers and hours of calling object and the parameter.*/
    travel t1,t2,z;
    t1.get();
    t2.get();
    t1.show();
    t2.show();
  z=t1.add(t2);
    cout<<"total km and hour"<<endl;
    z.show();
   return 0;
}