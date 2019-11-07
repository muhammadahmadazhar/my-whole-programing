#include <iostream>

using namespace std;

int main()
{
     int arr[3][4][5];
      for(int i=0;i<3;i++){
          for(int j=0;j<4;j++){
              for(int k=0;k<5;k++){
                  arr[i][j][k]=i*j*k;
              }
          }
      }

      for(int i=0;i<3;i++){
          for(int j=0;j<4;j++){

              for(int k=0;k<5;k++){
             cout<<arr[i][j][k]<<"  ";
              }
          cout<<endl;
          }
      cout<<endl<<endl;
      }
    return 0;
}
