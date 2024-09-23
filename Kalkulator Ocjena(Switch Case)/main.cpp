#include <iostream>

using namespace std;

int main()
{
    int M,O;
    int R;
    cout<<"Unesite maksimalne bodove: "<<endl;
    cin>>M;
    cout<<"Unesite ostvarene bodove: "<<endl;
    cin>>O;
    R=O*100/M;
    switch(R){
case 90 ... 100:
    cout<<"Odlièan"<<endl;
    break;
case 75 ... 89:
    cout<<"Vrlo dobar"<<endl;
    break;
case 65 ... 74:
    cout<<"Dobar"<<endl;
    break;
case 50 ... 64:
    cout<<"Dovoljan"<<endl;
    break;
case 1 ... 49:
    cout<<"Nedovoljan"<<endl;
    break;
default:
    cout<<"Jednostavno ne"<<endl;
    break;
    }
    return 0;

}








