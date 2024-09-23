#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int polje[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            polje[i][j]=rand()%10;
        }
    }
    cout<<"  -   -   -   -   -   -   -   -   -   -   ";
    for(int i=0;i<10;i++){
            cout<<endl;
            for(int j=0;j<10;j++){
        cout<<" |"<<polje[i][j]<<"|";
    }
    cout<<endl;
    cout<<"  -   -   -   -   -   -   -   -   -   -   ";
}
}
