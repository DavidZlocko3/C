#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int Zb=0;
    float Ar;
    int polje[433];
    for(int i=0;i<433;i++){
        polje[i]=rand()%100;
        Zb+=polje[i];
    }
    Ar=Zb/433;
    for(int i=0;i<433;i++){
        if(polje[i]>Ar){
            cout<<polje[i]-4<<endl;
        }
    }
}
