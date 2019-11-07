#include<iostream>
using namespace std;
class sting
{
    private:
    char str[50];
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
    sting operator+(sting s)
    {
      sting temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return(temp);
    }
};
int main()
{
    sting s1,s2,s3;
    s1.in();
    s2.in();
    s1.show();
    s2.show();
    s3=s1+s2;  //s3=s1.operator+(s2);
    cout<<"concatination"<<endl;
    s3.show();
   return 0;
}