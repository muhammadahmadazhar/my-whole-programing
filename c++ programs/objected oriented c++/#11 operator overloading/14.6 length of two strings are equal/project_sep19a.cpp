#include<iostream>
using namespace std;
class sting
{
    private:
    char str[30];
    public:
    sting()
    {
     str[0]='\0';
    }
    void in()
    {
     cout<<"enter str=";
     gets(str);
    }
    void show()
    {
     cout<<"str=";
     puts(str);
    }
    int operator==(sting s)
    {
      if(strlen(str)==strlen(s.str))
        return(1);
      else
        return(0);
    }
};
int main()
{
   sting s1,s2;
    s1.in();
    s2.in();
    s1.show();
    s2.show();
    cout<<"result"<<(s1==s2)<<endl;
    if(s1==s2)
    cout<<"STRINGS ARE OF EQUAL LENGTH";
    else
    cout<<"both strings are of different length";
    return 0;
}