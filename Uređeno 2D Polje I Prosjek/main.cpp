#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    double Z=0;
    srand(time(0));
    int polje[20][20];
    for(int i=0;i<20;i++){
            cout<<"{";
        for(int j=0;j<20;j++){
            polje[i][j]=rand()%200-100;
            Z+=polje[i][j];
            cout<<polje[i][j]<<",";
        }
        cout<<"}"<<endl;
    }
    cout<<"Prosjek je: "<<Z/400<<endl;
    }
