#include <iostream>

using namespace std;

int main()
{
    int Unos;
    int Nm=10;
    int Nv=0;
    int a;
    cin>>Unos;
    while(Unos>=1){
        a=Unos%10;
        Unos=Unos/10;
        if(a<Nm){
            Nm=a;
        }
        if(a>Nv){
            Nv=a;
        }
    }
    cout<<"Najmanji broj je: "<<Nm<<endl;
    cout<<"Najveci broj je: "<<Nv<<endl;
}
