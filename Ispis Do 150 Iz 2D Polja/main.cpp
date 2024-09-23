#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int a=0;
    srand(time(0));
    int polje[10][15];
    for(int i=0;i<10;i++){
        for(int j=0;j<15;j++){
            polje[i][j]=a;
            a+=1;
            cout<<polje[i][j]<<"  ";
        }
        cout<<endl;
    }
}
