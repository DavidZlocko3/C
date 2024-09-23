#include <iostream>

using namespace std;

int main()
{
    int najvisi=0;
    int broj;
    int polje[25];
    for(int i=0;i<25;i++){
        polje[i]=rand()%53+140;
        if(polje[i]>najvisi){
            najvisi=polje[i];
            broj=i;
        }
    }
    cout<<"Ucenik rednim brojem: "<<broj<<" je najvisi visine: "<<najvisi<<endl;
}
