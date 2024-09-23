#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int Zbr=0;
    srand(time(0));
    int polje[10][15];
    for(int i=0;i<10;i++){
        for(int j=0;j<15;j++){
            polje[i][j]=rand()%100;
            Zbr+=polje[i][j];
            cout<<polje[i][j]<<"  ";
        }
        cout<<"       "<<Zbr<<endl;
        Zbr=0;
    }

}
