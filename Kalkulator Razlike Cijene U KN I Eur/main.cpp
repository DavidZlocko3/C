#include <iostream>

using namespace std;

int main()
{
    double kn,E,Ekn,O;
    cout<<"Unesi cijenu u kunama: "<<endl;
    cin>>kn;
    cout<<"Unesi cijenu u eurima: "<<endl;
    cin>>E;
    Ekn=E*7.5345;
    O=Ekn/kn*100;
    cout<<"Cijenu u eurima je veca za "<<O<<" posto."<<endl;
    return 0;

}
