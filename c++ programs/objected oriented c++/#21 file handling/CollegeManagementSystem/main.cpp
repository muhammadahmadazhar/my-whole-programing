#include <iostream>
#include<fstream>

using namespace std;
class Student{
    private:
        int id;
        string first,last,email;
    public:
        void get(){
            cout<<"Enter ID=";cin>>id;
            cout<<"Enter FirstName=";cin>>first;
            cout<<"Enter LastName=";cin>>last;
            cout<<"Enter Email=";cin>>email;
            }
        void show(){
            cout<<"ID="<<id<<endl;
            cout<<"FirstName="<<first<<endl;
            cout<<"LastName="<<last<<endl;
            cout<<"Email="<<email<<endl;
            }

};

int main()
{
    Student s;
   // s.get();
   // s.show();

    ofstream fout;
    fout.open("data.txt",ios::app|ios::binary);
    s.get();
    fout.write((char*)&s,sizeof(s));
    cout<<endl;
    fout.close();

    ifstream fin("data.txt",ios::app|ios::binary);
    fin.read((char*)&s,sizeof(s));
    s.show();
    fin.close();
    return 0;
}
