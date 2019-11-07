#include<iostream>
#include<fstream>
using namespace std;
struct person
{
    char name[30];
    char email[50];
};
int main()
{
    ofstream fout("data.txt",ios::binary);
    person p;
    cout<<"enter name=";
    cin>>p.name;
    cout<<"enter email=";
    cin>>p.email;
    fout.write((char*)&p,sizeof(p));
    fout.close();
    ifstream fin("data.txt",ios::binary);
    fin.read((char*)&p,sizeof(p));
    cout<<"name="<<p.name<<endl;
    cout<<"email="<<p.email<<endl;
   return 0;
}