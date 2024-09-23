#include <iostream>

using namespace std;

int main()
{
    int Ar,Zb;
    int polje[5];
    for(int i=0;i<5;i++){
        cin>>polje[i];
        Zb+=polje[i];
    }
    Ar=Zb/5;
    for(int i=0;i<5;i++){
        if(polje[i]>Ar){
            cout<<polje[i]<<endl;
        }
    }
    return 0;
}
