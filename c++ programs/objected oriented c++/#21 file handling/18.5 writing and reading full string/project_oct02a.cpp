#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<"program that writes five line of strings ina file then display them on screen by reading these lines\n";
    ofstream fout("c:\\strings.txt");
    ifstream fin("c:\\strings.txt");
    char str[50];
    if(!fout)
    {
        cout<<"error opening file";
    }
    for(int i=0;i<5;i++)
    {
        gets(str);
        fout<<str<<endl;
    }
    while(!fin.eof())
    {
        fin.getline(str,50);
        cout<<"string="<<str<<endl;   
    }
    fin.close();
   return 0;
}