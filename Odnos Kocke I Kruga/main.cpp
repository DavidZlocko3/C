#include <iostream>

using namespace std;

int main()
{
    double Pkr,Pkv,a,r,R,R1;
    cout<<"Unesi stranicu kvadrata: "<<endl;
    cin>>a;
    cout<<"Unesi polumjer kruga: "<<endl;
    cin>>r;
    Pkr=r*r*3.14;
    Pkv=a*a;
    if (Pkr>Pkv){
        cout<<"Krug je opisan kvadratu"<<endl;
        R=Pkr-Pkv;
        cout<<"Krug je od kvadrata veci za "<<R<<endl;
    }
    if (Pkr<Pkv){
        cout<<"Krug je upisan kvadratu"<<endl;
        R1=Pkv-Pkr;
        cout<<"Kvadrat je od kruga veci za "<<R1<<endl;
    }
    return 0;
}
