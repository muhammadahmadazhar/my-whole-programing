#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("myfile.dat",ios::binary);
    fout<<"heiio";
    return 0;
}
