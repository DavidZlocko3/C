#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int polje[10][15];
    int Zstupac[15]{0};
    for(int i=0;i<10;i++){
        for(int j=0;j<15;j++){
            polje[i][j]=rand()%100;
            cout<<polje[i][j]<<"  ";
            Zstupac[j]+=polje[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<15;i++){
        cout<<Zstupac[i]<<endl;
    }

}
