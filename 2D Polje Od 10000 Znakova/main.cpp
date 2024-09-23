#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    int polje[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            polje[i][j]=rand()%100;
            cout<<polje[i][j]<<"  ";
        }
        cout<<endl;
    }
}
