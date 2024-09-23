#include <iostream>

using namespace std;

int main()
{
    int P,D,T,z,i,e,f;
    for(int i=100;i<=999;i++){
        e=i;
        f=i;
        T=e%10;
        e=e/10;
        D=e%10;
        e=e/10;
        P=e%10;
        if(T==7||D==7||P==7){
            z+=f;
        }
    }
    cout<<"Zbroj svih troznamenkastih brojeva sa znamenkom 7 je: "<<z<<endl;
}
