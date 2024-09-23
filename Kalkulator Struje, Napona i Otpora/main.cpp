#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"Unesite sto zelite izracunati(U/I/R): "<<endl;
    cin>>a;
    float U,I,R;
    if (a=='U'){
        cout<<"Unesite struju i otpor: "<<endl;
        cin>>I;
        cin>>R;
        cout<<"Napon je "<<I*R<<" volti."<<endl;
    }
    if (a=='I'){
        cout<<"Unesite napon i otpor: "<<endl;
        cin>>U;
        cin>>R;
        cout<<"Struja je "<<U/R<<" ampera."<<endl;
    }
    if (a=='R'){
        cout<<"Unesite struju i napon: "<<endl;
        cin>>I;
        cin>>U;
        cout<<"Otpor je "<<U/I<<" ohma."<<endl;
    }
    return 0;
}
