#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream fin; ofstream fout;
    char ch,chh;
    fout.open("myfile.dat");
    fout<<"hello world";
    fout.close();
    fin.open("myfile.dat");
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch;
        fin>>ch;
    }
    fin.close();
    cout<<endl;
    fin.open("myfile.dat");
    chh=fin.get();
    while(!fin.eof())
    {
        cout<<chh;
        chh=fin.get();
    }
    fin.close();
   return 0;
}