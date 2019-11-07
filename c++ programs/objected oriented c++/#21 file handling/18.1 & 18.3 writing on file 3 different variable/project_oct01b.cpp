#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n=10;
    char ch='*';
    double d=1.23;
    ofstream fout("C:\\test.txt");
    ifstream fin;
    if(!fout)
    {
        cout<<"error";
    }
    fout<<n<<' '<<ch<<' '<<d<<endl;
    fout.close();
    fin.open("c:\\test.txt");
    if(fin)
    cout<<"file is open\n";
    fin>>n>>ch>>d;
    cout<<n<<' '<<ch<<' '<<d<<endl;
    fin.close();
   return 0;
}