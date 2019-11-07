#include <iostream>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    void setdata(string s,int a){
        name=s;    age=a;
    }
    void showdata(){
    cout<<"name="<<name<<endl;
    cout<<"age"<<age<<endl;
    }
};

int main()
{
    pair <string,int>p1;
    pair <string,float>p2;
    pair <string,string>p3;
    p1=make_pair("amjad",16);
    p2=make_pair("asad",3.3);
    p3=make_pair("akeel","babar");
    cout<<"p1="<<p1.first<<"  "<<p1.second<<endl;
    cout<<"p2="<<p2.first<<"  "<<p2.second<<endl;
    cout<<"p2="<<p3.first<<"  "<<p3.second<<endl;
    student s1,s2;
    s1.setdata("waqas",20);
    pair <int,student>p4;
    p4=make_pair(11,s1);
    cout<<"p4="<<p4.first<<endl;
    s2=p4.second;
    s2.showdata();
    return 0;
}
