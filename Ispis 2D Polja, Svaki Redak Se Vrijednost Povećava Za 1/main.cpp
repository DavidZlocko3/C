#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a=0;
    int polje[10][15];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            polje[i][j]=a;
            cout<<polje[i][j]<<"  ";
        }
        a+=1;
        cout<<endl;
    }
}
