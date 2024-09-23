#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int polje[30];
    int Zb=0;
    int Br=0;
    int Ar;
    for(int i=0;i<30;i++){
        polje[i]=rand()%100;
        if(polje[i]%2==0){
            Zb+=polje[i];
            Br+=1;
        }
    }
    Ar=Zb/Br;
    cout<<Ar<<endl;
}
