#include <iostream>

using namespace std;

int main()
{
    int Unos,Zb,a;
    cin>>Unos;
    while(Unos>=1){
        a=Unos%10;
        Zb+=a;
        Unos=Unos/10;
    }
    cout<<Zb<<endl;
}
