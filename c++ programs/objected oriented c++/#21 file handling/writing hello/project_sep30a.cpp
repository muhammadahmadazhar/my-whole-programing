#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.dat");
    return 0;
    fout<<"hello";
    return 0;
    fout.close();
    return 0;
}